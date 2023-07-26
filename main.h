#ifndef printf_f
#define printf_f
#include <stdarg.h>

typedef struct type_t
{
    char *opt;
    int (*f)(va_list);
}type;

int _putchar(char c);
int print_100(va_list args);
int print_d(va_list args);
int print_f(va_list args);
int print_c(va_list args);
int print_s(va_list args);
int _printf(const char *format, ...);

#endif