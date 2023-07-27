#include "main.h"
/**
 * _printf - prints everything
 * @format: format string
 * Return: the count of printed characters
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	int (*func_ptr)(va_list);

	va_start(args, format);

	if (*format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				func_ptr = get_func(format[i + 1]);
				if (func_ptr)
				{
					i += func_ptr(args);
					i++;
				}
				continue;
			}
			_putchar(format[i++]);
		}
	}
	va_end(args);
	return (i);
}
