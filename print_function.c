#include "main.h"

/**
 * print_char -print characters
 * @args: a character to print
 *
 * Return: 1, that means stdout
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - print a string
 * @args: the string to print
 *
 * Return: a number of character printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL) /* null si es q string no existe*/
	{
		write(1, "(null)", 6);
		return (6);
	}
	else if (str[0] == '\0') /* \0 si es q string no tiene un valor o esta vacio*/
	{
		return (-1);
	}
	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}

/**
 * print_number - printing an integer
 * @args: an integer to print
 *
 * Return: number of character to be printed
 */
int print_number(va_list args)
{
	int n;
	unsigned int num, div, zeros = 1, len = 0;

	n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}
	else
		num = n;

	div = num;
	while (div > 9)
	{
		div /= 10;
		zeros *= 10;
	}
	while (zeros >= 1)
	{
		len += _putchar(((num / zeros) % 10) + '0');
		zeros = zeros / 10;
	}
	return (len);
}
