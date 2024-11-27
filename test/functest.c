#include "main.h"

/**
 * print_int - prints an integer
 * @arg_pointer: argument list containing the integer to print
 * Return: number of character printed
 */

/*int print_int(va_list arg_pointer)
{
	int num = va_arg(arg_pointer, int);
	int count = 0, power = 1, int_min = -2147483648, temp;

	if (num == int_min)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		count += 2;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	temp = num;
	while (temp / 10)
	{
		power *= 10;
		temp /= 10;
	}
	while (power > 0)
	{
		_putchar((num / power) % 10 + '0');
		power /= 10;
		count++;
	}
	return (count);
}*/

/**
 * print_char - print a character
 * @arg_pointer: argument list containing the character to print
 * Return: 1
 */

/*int print_char(va_list arg_pointer)
{
	char c = (char)va_arg(arg_pointer, int);

	_putchar(c);
	return (1);
}*/

/**
 * print_string - print a string
 * @arg_pointer: argument list containing the string to print
 * Return: number of character printed
 */

/*int print_string(va_list arg_pointer)
{
	int count = 0;
	char *s = va_arg(arg_pointer, char *);

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
	while (*s)
	{
		_putchar(*s++);
		count++;
	}
	return (count);
}*/


int print_char(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

      if (s == NULL)
        {
                _putchar

int print_string(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

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
        while (*s)
        {
                _putchar(*s++);
                count++;
        }
        return (count);
}

int print_int(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

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
        while (*s)
        {
                _putchar(*s++);
                count++;
        }
        return (count);
}

int print_unsigned(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

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
        while (*s)
        {
                _putchar(*s++);
                count++;
        }
        return (count);
}

int print_octal(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

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
        while (*s)
        {
                _putchar(*s++);
                count++;
        }
        return (count);
}

int print_hex_lower(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

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
        while (*s)
        {
                _putchar(*s++);
                count++;
        }
        return (count);
}

int print_hex_upper(va_list arg_pointer)
{
int count = 0;
        char *s = va_arg(arg_pointer, char *);

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
        while (*s)
      
