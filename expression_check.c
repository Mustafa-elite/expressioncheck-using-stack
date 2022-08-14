#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
int expression_check(char* expression)
{
	STACK_T stack;
	STACK_T* ptr_stack = &stack;
	createemptystack(ptr_stack);
	int i = 0;
	char popped;
	while (expression[i] != NULL)
	{
		if (expression[i] == '{' || expression[i] == '}' ||
			expression[i] == '[' || expression[i] == ']' ||
			expression[i] == '(' || expression[i] == ')')
		{
			if (getstacktop(ptr_stack) == -1)
			{
				push(ptr_stack, expression[i]);
				i++;
				continue;
			}
			if ((expression[i] == '}' && getlastelement(ptr_stack) == '{') ||
				(expression[i] == ']' && getlastelement(ptr_stack) == '[') ||
				(expression[i] == ')' && getlastelement(ptr_stack) == '('))
			{
				pop(ptr_stack, &popped);
				i++;
				continue;
			}
			else
			{
				push(ptr_stack, expression[i]);
				i++;
			}
		}
		else
		{
			i++;
			continue;
		}
	}
	if (isempty(ptr_stack))
		return true;
	else
		return false;
}