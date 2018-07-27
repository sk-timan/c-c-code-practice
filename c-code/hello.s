/*.section .data
.section .text
.globl _start    #.globl将告诉汇编器 ，后面的符号将被链接器用到，链接器在链接时会查找目标文件中的_start符号 代表的地址，把它设置为整个程序的入口地址
_start:
	movl $1, %eax    #$  立即数，无内存,eax为累加寄存器常用于运算；
	movl $4, %ebx	 #ebx 基址寄存器常用于地址索引；
	int $0x80	#int 为软中断指令，int $0x80这种异常称为系统调用（System Call）



#eax的值是系统调用号，Linux的各种系统调用都是由int $0x80指令引发的，内核需要通过eax判断用户要调哪个系统调用，_exit的系统调用号是1。ebx的值是传给_exit的参数，表示退出状态。_exit系统调用比较特殊，它会终止掉当前进程


#gcc -c hello.s  命令生成目标文件(object)hello.o
#ld hello.o -o hello 用链接器将目标文件hello.o链接成hello可执行文件(链接主要有两个作用，一是修改目标文件中的信息，对地址做重定位;二是把多个目标文件合并成一个可执行文件)如果目标文件是由C代码编译生成的，用gcc做链接就没错了.
#链接器编辑的是目标文件

#shell中:
#	echo   ———— 打印shell变量的值
#	$?     ———— 上一指令
*/


/*.section .data
data_items:						//汇编器会把数组的首地址作为data_items符号所代表的地址，data_items类似于C语言中的数组名。data_items这个标号没有用.globl声明，因为它只在这个汇编程序内部使用，链接器不需要用到这个名字。
	.long 3,67,34,222,45,75,54,34,44,33,22,11,66,0
.section .text
.globl _start
_start:
	movl $0, %edi  		//edi变址寄存器,用于存放存储单元在节(section)内的偏移量，用它们可实现多种存储器操作数的寻址方式，为以不同的地址形式访问存储单元提供方便。    在此表示当前数组数的位置
	movl data_items(,%edi,4), %eax		//将data_items中的第edi个元素值移到eax中，4表示每个元素占4字节(32位)
	movl %eax, %ebx		

start_loop:
	cmpl $0, %eax		//cmp 比较符;第一个操作数(0)减去第二个操作数(eax),计算结果改变eflags寄存器中的标志位，计算结果为0时，ZF为1，否则为0；
	je loop_exit		//je(jump if equal)是一个条件跳转指令，它检查eflags中的ZF位，ZF位为1则发生跳转，ZF位为0则不跳转，继续执行下一条指令

	incl %edi	//edi++
	movl data_items(,%edi,4), %eax
	cmpl %ebx, %eax  //之前减现在
	jle start_loop		//jle(jump if less than or equal) 后者小于等于前者(之前的数更大)，则跳转比较下面一个数

	movl %eax, %ebx
	jmp start_loop		//无条件跳转指令

loop_exit:
	movl $1, %eax   //在此，ebx作为_exit的status(return值)；eax=1,作为_exit()的system call(调用值)
	int $0x80  //system call 中断
*/




/*push $ebp	//push压栈 把ebp的值压栈，同时esp-8
call   80483aa <foo>	//call的下一条指令的地址压栈，同时esp-8,跳转到80483aa的虚拟地址(foo()函数所在)，并修改eip
sub a,b 	//b=b-a ; 同时esp-8
pop $ebp 	//出栈 ebp=上一栈底ebp
leave 		//esp=ebp,ebp=上一栈底ebp(pop $ebp)
ret  		//结束当前函数,返回之前call点(pop $eip)
nopw    0x0(%rax,%rax,1) //空操作，用于维持周期稳定
lea	0xd4(%rip),%rdi 	//提取地址写到rdi

*/





/*in the shell:
	readelf -a hello.o //读出目标文件hello.o的ELF Header和Section Header Table
	readelf -s hello.o //只读符号表
	//偏移量对应各节(section)文件地址,偏移量之差表示该节大小；
	//.bss在文件中只占一个Section Header而没有对应的Section，程序加载时.bss段占多大内存空间在Section Header中描述，用于初始化——未初始化全局变量——为0；
	//.shstrtab保存着各Section的名字，
	//.strtab保存着程序中用到的符号的名字。
	//.rel.text告诉链接器指令中的哪些地方需要做重定位
	//.symtab是符号表；Ndx Name：每个符号所在的section编号(对应Section Header Table)+名字；Value列是每个符号所代表的地址，在目标文件中，符号地址都是相对于该符号所在Section的相对地址，比如data_items位于.data段的开头，所以地址是0，
	hexdump -C hello.o(hello) //读出目标文件(可执行文件)的文件地址(对应上面的偏移量)及中间的16个字节(16进制)，还有每个字节对应的ASCII码
	objdump -d hello.o	//反汇编 .text 节
	//左为机器指令字节，右为反汇编结果，没有加$的数表示内存地址如0x0表示 .data
	
//以上所有地址都是相对地址，下一步链接器要修改这些指令，把其中的地址都改成加载时的内存地址
	readelf -a hello 	//分析可执行文件
	//重新分配了虚拟地址，.text的地址为当前分配的入口点地址(也是_start的地址),几个section被合并为segment
	//在Program Headers中，描述了页的内容，包括每个segment的偏移量，每个segment的虚拟地址，每个segment(段)的大小，读写种类，每页大小x1000(4kbit)
	//每个segment的虚拟地址为：当前页的虚拟地址+偏移量
	objdump -d hello	//反汇编可执行文件
	//新的虚拟地址=原来的相对地址+分配的地址
	//在数组0x0处，运用了重定位信息(.ral.text)
	//.bss段在文件中不占存储空间，在加载时这个段用0填充。
*/

/*gcc main.c -g       //源码级调试，在可执行文件中加入源代码的信息，objdump反汇编时可以把C代码和汇编代码穿插起来显示;
gcc main.c -S（大写） //生成main.s,可直接打开
objdump -dS a.out   //反汇编


gdb:
	disassemble;    //反汇编当前函数；

	si;		//单指令调试；（step为单行调试）
	i registers	//显示所有寄存器的当前值
	p $rax 		//打印当前rax
	x/20 $rsp	//从rsp首地址开始，打印20个32数
*/
	
//x86平台上这个栈是从高地址向低地址增长的
//esp指向当前整个栈的栈顶，ebp指向当前帧的帧底
//一个内存单元对应四个内存地址；相当于一条信息
//一个内存地址包含一个字节（32位）；
//一个栈帧包含一个或几个内存单元(存在无信息单元)；但栈帧的大小都一样(16byte)
//一个函数对应一个栈帧；


































