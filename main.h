#ifndef printf_f
#define printf_f
#include <stdarg.h>
#include <string.h>
/**
 * struct type_s - Struct type_s
 * @opt: options
 * @f: the associated function
 */
typedef struct type_s
{
	char opt;
	int (*f)(va_list);
} type_t;

int (*get_func(char s))(va_list);
int _putchar(char c);
int print_100(va_list args);
int print_d(va_list args);
int print_f(va_list args);
int print_c(va_list args);
int print_s(va_list args);
int _printf(const char *format, ...);

#endif
