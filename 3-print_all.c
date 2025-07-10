#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char v1;
	int v2;
	char *v3;
	const char *separator = ", ";
		va_start(args, format);

	for (i = 0; format[i] != '\0';  i++)
	{

		if (format[i] == 'c') {
			v1 = va_arg(args, int);
			putchar(v1);
			while( *separator) {
				putchar(*separator);
				separator++;
			}
			separator = separator - 2;
		}
		else if (format[i] == 'i') {
			v1 = va_arg(args, int);
			putchar(v1 + 48);
			while( *separator) {
				putchar(*separator);
				separator++;
			}
			separator = separator - 2;
		}
		else if (format[i] == 's')  {
			v3 = va_arg(args, char *);
			while( *v3) {
				putchar(*v3);
				v3++;
			}
		}



	}
	printf("\n");
	va_end(args);


}
