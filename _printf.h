#ifndef PRINTF_H
#define PRINTF_H
#include "main.h"

/**
 *print_char -print characters
  *@c: a character to print
 *
 *Return: 1, that means stdout
 */
int print_char(char c) /*Building de %C */
{
  write(1, &c, 1);
  return (1);
}

/**
 *print_string - print a string
 *@str: the string to print
 *
 *Return: a number of character printed
 */
int print_string(char *str)
{
  int i = 0;

  if(str == NULL)
  {
    str = "(null)";
  }
  while (str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
  return (i);
}

/**
 *print_number - printing an integer
 *@n: an integer to print
 *
 *Return: number of character to be printed
 */
int print_number(int n)
{
  int count = 0;
  int digit;

  if (n < 0)
  {
    write(1, "-", 1);
    count ++;
  }
  if (n / 10)
  {
    count += print_number(n / 10);
  }
  digit = n % 10;

  if (digit < 0)
  {
    digit = -digit;
  }
  digit += '0';

  write(1, &digit, 1);
  count++;

  return (count);
}
