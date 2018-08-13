all: main
#all，执行主要的编译工作，通常用作缺省目标。相当于一个伪目标，all后面的为他的依赖，不写则默认第一个

main: main.o stack.o maze.o
	gcc $^ -o $@

clean:
	-rm  main *.o *.d

.PHONY:clean

sources = main.c stack.c maze.c

include $(sources:.c=.d)
%.d: %.c
	set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

