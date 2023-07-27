#include "main.h"
/**
 * get_func - determine printing function
 * @args:number of arguments
 * Return: 1 (on success)
*/
int (*get_func(char s))(va_list)
{
	type_t types[] =
	{
		{'c', print_c},
		{'s', print_s},
		{'%', print_100},
		{'\0', NULL}
	};
	int i = 0;

	while (types[i].f != NULL)
	{
		if(s == types[i].opt)
		{
			return (types[i].f);
		}
		i++;
	}
	return (NULL);
}