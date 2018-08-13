
main: main.o stack.o maze.o	               	
	gcc main.o stack.o maze.o -o main	
#欲更新目标，必须首先更新它的所有条件；所有条件中只要有一个条件被更新了，目标也必须随之被更新
main.o: main.c main.h stack.h maze.h
	gcc -c main.c

stack.o: stack.c stack.h main.h
	gcc -c stack.c

maze.o: maze.c maze.h main.h
	gcc -c maze.c

clean:
	@echo "cleanning project"
	-rm main *.o
	@echo "clean completed"

.PHONY: clean

#如果make执行的命令前面加了@字符，则不显示命令本身而只显示它的结果；如果命令前面加了-号，即使这条命令出错，make也会继续执行后续命令。通常rm命令和mkdir(创建目录)命令前面要加-号
#把clean声明为一个伪目标(这样就算有名为clean的目标文件也无所谓)
#clean为删除main的编译过程中的所有二进制文件(目标文件；可执行文件)


#另外的写法：
main: main.o stack.o maze.o
	gcc main.o stack.o maze.o -o main

main.o: main.h stack.h maze.h

stack.o: stack.h main.h

maze.o: maze.h main.h

#将(.o)目标文件的更新拆为头文件依赖 和 (.c)文件依赖+命令；其中.c文件依赖+命令为隐式规则可以不写;
#相当于只写头文件(.h)的依赖

clean:
	-rm main *.o

.PHONY: clean


##以上都是以目标为中心，下面以依赖为中心：

main: main.o stack.o maze.o
	gcc main.o stack.o maze.o -o main

main.o stack.o maze.o: main.h

main.o maze.o: maze.h

main.o stack.o: stack.h

clean:
	-rm main *.o

.PHONY: clean

##还可以简化命令行

main: main.o stack.o maze.o
	gcc $^ -o $@

main.o stack.o maze.o: main.h

main.o maze.o: maze.h

main.o stack.o: stack.h

clean:
	-rm main *.o
#删除main和所有.o文件
.PHONY: clean


#$@，表示规则中的目标。

#$<，表示规则中的第一个条件。

#$?，表示规则中所有比目标新的条件，组成一个列表，以空格分隔。

#$^，表示规则中的所有条件，组成一个列表，以空格分隔。


##还可以对库文件进行更新

libstack.a: stack.o push.o pop.o is_empty.o
	ar r libstack.a $?
	ranlib libstack.a




_________________________________________________________________________________________________



##自动生成目标文件和源文件的依赖关系(终极版本)
#$ gcc -MM *.c shell中手动查看依赖

all: main
#all，执行主要的编译工作，通常用作缺省目标。相当于一个伪目标，all后面的为他的依赖，不写则默认第一个

main: main.o stack.o maze.o
	gcc $^ -o $@

clean:
	-rm main *.o

.PHONY:clean

sources = main.c stack.c maze.c
#sources变量包含我们要编译的所有.c文件

include $(sources:.c=.d)
%.d: %.c
	set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

#生成的.d文件为自主生成的头文件依赖，这样就算改变了目标文件的头文件依赖也不必手动在目标文件(.o)中添加头文件了


##补充


#$ make -C home/zhan 指定目录下进行makefile



