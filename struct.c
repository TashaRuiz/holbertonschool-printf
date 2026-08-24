#include "main.h"
/**
 * get_struct - Connects to the correct operating function.
 * @spec: Operator passed as argument to the program.
 * @args: List of arguments.
 *
 * Return: The correct operating function.
 */
int get_struct(char spec, va_list args)
{
	int i, count = 0;

	print_struct stct[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL},
	};

	if (spec == '%')
	{
		_putchar (spec);
		return (1);
	}
	else
	{
		for (i = 0; stct[i].ps != NULL; i++)
		{
			if (stct[i].ps[0] == spec)
			{
				count += stct[i].f(args);
				return (count);
			}
		}
	}
	return (0);
}
