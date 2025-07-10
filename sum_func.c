#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


int sum_them_all(int num_of_arg, ... )
{
	va_list args;
	int i;
	int total = 0;
	va_start(args, num_of_arg);

	for (i = 0; i < num_of_arg;  i++)
	{
		total = total + va_arg(args, int);


	}
	va_end(args);
	return total;


}
