#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
void createemptystack(STACK_T* ptr_stack)
{
	ptr_stack->top = -1;
}
int push(STACK_T* ptr_stack, char data)
{
	if (ptr_stack->top >= MAX_SIZE - 1)
		return false;
	else
	{
		ptr_stack->top++;
		ptr_stack->element[ptr_stack->top] = data;
		return true;
	}
}
int pop(STACK_T* ptr_stack, char* data)
{
	if (ptr_stack->top < 0)
		return false;
	else
	{
		*data = ptr_stack->element[ptr_stack->top];
		ptr_stack->top--;
		return true;
	}
}
int printstack(STACK_T* ptr_stack)
{
	if (ptr_stack->top < 0)
		return false;
	else
	{
		printf("[ ");
		for (int i = ptr_stack->top; i >= 0; i--)
		{
			printf("%c ", ptr_stack->element[i]);
		}
		printf("]");
		return true;
	}
}
int getstacktop(STACK_T* ptr_stack)
{
	return ptr_stack->top;
}
char getlastelement(STACK_T* ptr_stack)
{
	return ptr_stack->element[ptr_stack->top];
}
int isfull(STACK_T* ptr_stack)
{
	if (ptr_stack->top >= MAX_SIZE - 1)
		return true;
	else
		return false;
}
int isempty(STACK_T* ptr_stack)
{
	if (ptr_stack->top < 0)
		return true;
	else
		return false;
}