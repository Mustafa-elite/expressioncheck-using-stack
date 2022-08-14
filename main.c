#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
int main()
{
	while (1)
	{
		char x[200];
		gets(x);
		if (expression_check(x))
			printf("good expression\n");
		else
			printf("bad expression\n");
	}
}