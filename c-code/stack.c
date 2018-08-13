#include "stack.h"

static item_t stack[512];   //typedef struct point {int row, col;}item_t;  main.h中的变量体定义
static int top = 0;		

void push(item_t p)
{
	stack[top++] = p;
}

item_t pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}
