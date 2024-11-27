#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/* Add this prototype */
int print_number(unsigned int n);
/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 * Return: number of characters printed (always 1)
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 * Return: number of characters printed
 */
int print_string(va_list args)
{
int count = 0;
char *s = va_arg(args, char *);
if (s == NULL)
{
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
return (6);
}
while (s[count])
{
_putchar(s[count]);
count++;
}
return (count);
}
/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int count = 0;
unsigned int num;
if (n < 0)
{
_putchar('-');
count++;
num = -n;
}
else
num = n;
if (num / 10)
count += print_number(num / 10);
_putchar((num % 10) + '0');
count++;
return (count);
}
/**
 * print_number - helper function to print numbers recursively
 * @n: number to print
 * Return: number of characters printed
 */
int print_number(unsigned int n)
{
int count = 0;
if (n / 10)
count += print_number(n / 10);
_putchar((n % 10) + '0');
count++;
return (count);
}
