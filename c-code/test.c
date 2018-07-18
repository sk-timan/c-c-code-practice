/*#include <stdio.h>


int LCM(int a,int b)
{
	int i=1;
	int num=a;
	do{
		num=a*(++i);
	}
	while (num%b!=0);
	return num;
}



int a=4;
int b=24;

void main(void)
{
	printf("The LCM of %d and %d is %d.\n",a,b,LCM(a,b));
}
*/
#include <stdio.h>

#include <stdio.h>



/* 定义枚举类型 */

/*enum DAY { MON=1, TUE, WED, THU, FRI, SAT, SUN };



void main()

{

    

    int x=10, y=20, z=30;



    

    enum DAY yesterday = MON, 

                        today = TUE,

                   tomorrow = WED;



    printf("%d %d %d \n", yesterday, today, tomorrow);

}
*/


#include<stdio.h>

/*int *arry(int a[])
{
	int i;
    	for (i=0;i<8;i++){
        	if (a[i]==0){
			a[i]=1;
        	}
        	else {
            		a[i]=0;
       		}
	}
	return a;   	
}
*/

/*int a[6]={1,2,3,};

void main(void)
{
	int b=sizeof(a)/sizeof(a[0]);
	int *c=a;
	printf("%d\n",b);
	printf("%d\n",c[3]);
}

*/



/*void main(void)
{
	int i;
	int c=0;
	for (i=0;i<=5;i++){
		c++;
	}
	printf("%d",c);
}
*/

/*int get_lens(int e[])        //无法返回原函数长度
{
	int n;
	n=sizeof(e)/sizeof(e[0]);
	return n;
}

void main(void)
{
	int a[5]={2,3,};
	printf("%d\n",get_lens(a));
}
*/







/*#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m=5;
    	int *p= (int*)malloc(m*(sizeof(int)));//动态申请内存
    	int i;
    	for (i=0;i<m; i++){
        	p[i] = i;
    	}
        for (i = 0; i <m; i++){
            	printf("%d\t", p[i]);
        }
	printf("\n");
    	//free(p);//释放内存
    	return 0;
}
*/

/*int n=5;
int m(void)
{
	int i;
	n--;
	printf("%d_1\n",n);
	if (n==0){
		return n;
	}
	else {
		for (i=0;i<n;i++){
			printf("%d_2\n",n);
			m();
		}
		return n;
	}
}


void main(void)
{
	m();
	printf("%d_3\n",n);
}
*/

/*int num(void)
{
	int n=10;
	n=n-1;
	return n;
}

void main (void)
{
	int n=5;
	int i;
	for (i=0;i<n;i++){ 
			n=n-1;    //此处的n为全局变量；
		printf("%d\n",num());  //此处的n为局部变量；
	}
	printf("%d\n",n);
}
*/


/*#include <stdlib.h>

void main(void)
{
	int i;
	int t;
	int j;
	int *a=(int*)malloc(10*(sizeof(int)));
	for (i=0;i<10;i++){
		t=rand()%(10-0+1)+0;  //rand()%(n-m+1)+m;  最大值n;
		//printf("t=%d\n",t);
		for (j=0;j<i;j++){
            		if (a[j]==t){
                		i--;   //全局变量i,如果发现在i处和之前有重复的，则i不变再执行一遍；
                		break;
            		}
        	}
		//printf("%d\n",j);
        	if (j==i){
            		a[i]=t;
    		}
	}
    	for (i=0;i<10;i++){
		printf("%d ",a[i]);
	}
    	printf("\n");
}
*/
		
#include <stdlib.h>
/*int N=200;

void gen_random(void)
{
	int i,a;
	for (i=0;i<N;i++){
		a=rand()%10;  //0到9
		a=rand()%(10-0+1)+0;    //0到10(括号不能少）
		printf("%d\n",a);
	}
}



void main(void)
{
	gen_random();
}

*/


/*#include <stdio.h>

int a[3]={1,2,3};

int main(void)
{
	int i=1;
	//printf("%d,%d\n",i,a[i]);
	//printf("%d,%d\n",i,a[i++]);   //i=2,a[1];
	//printf("%d,%d\n",i,a[++i]);	//i=2,a[2];
	//printf("%d,%d\n",i,a[i--]);	//i=0,a[1];
	printf("%d,%d\n",i,a[--i]);	//i=0,a[0];
}
*/



/*#include <stdio.h>

int main(void)
{
	unsigned int x=0x0000ff00;
	int a=x;
	printf("%d\n",a);
	return 0;
}
*/

/*#include <stdio.h>

unsigned int a=0x00010;
unsigned int b=0x00110;
unsigned int mask=0xf;

unsigned int multiply(unsigned int x, unsigned int y)
{
	int i;
	unsigned int mask=0x1;
	unsigned int num=0;
	for (i=0; i<32; i++){
		if ((y>>i&mask) ==1){
			printf("%x,%d\n",x,i);
			num += (x<<i);
		}
	}
	return num;
}



int main(void)
{
	unsigned int s;
	s=multiply(a,b);
	//s=b>>(4*3)&mask;
	printf("%x\n",s);
	return 0;
}
*/


/*#include <stdio.h>


void main(void)
{
	unsigned int a,b,mask=0x000ff00;
	unsigned int c,d,e;
	a=0x1234e678;
	b=(a&mask)>>8;		//&和运算，左右同为1时取1，否则为0；
				//每右移4位，a16进制数值上右移1位；
	c=(a>>8) & ~(~0u <<8);  //~ 否运算，1变0，0变1；
	d=a & ~mask;
	e=a | mask;		//| 或运算，左右全为0才为0，否则为1；
	printf("%x\n",mask);
	printf("%x\n",a);
	printf("%x\n",b);
	printf("%x\n",c);
	printf("%x\n",d);
	printf("%x\n",e);
}
*/


	




























