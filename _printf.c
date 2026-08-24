#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Character string containing directives
 *
 * Return: Number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int print;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				print = get_struct(format[i + 1], args);

				if (print == 0)
				{
					count += _putchar(format[i]);
				}
				else if (print < 0)
				{
					i++;
				}
				else
				{
					count += print;
					i++;
				}
			}
			else
			{
				count += _putchar(format[i]);
			}
		}
	}
	va_end(args);

	return (count);
}
