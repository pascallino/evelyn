#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	int total = 0;
	va_start(args, n);

	for (i = 0; i < n;  i++)
	{
		if (i  == n - 1)
		{
			separator = "";
		}
		printf("%d%s"   , va_arg(args, int), separator);


	}
	 printf("\n");
	va_end(args);


}
