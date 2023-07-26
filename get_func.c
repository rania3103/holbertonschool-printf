#include "main.h"
/**
 * get_func - determine printing function
 * @args:number of arguments
 * Return: 1 (on success)
*/
int (*get_func(char *s))(va_list)
{
	type types[] =
	{
		{"c", print_c},
		{"s", print_s},
		{"%", print_100},
		{NULL, NULL}
	};
	int i = 0;

	while (types[i])
	{
		if(strcmp(s, types[i].opt) == 0)
		{
			return (types[i].f);
		}
		i++;
	}
	return (NULL);
}