#include "main.h"


int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start (va_list, args);
	if (*format)
	{
		while(format[i])
		{
			if(format[i] == '%')
			{
				return (get_func(format[i+1]));
			}
			i++;
			va_arg(args, char*);
		}
	}
	va_end(args);
}