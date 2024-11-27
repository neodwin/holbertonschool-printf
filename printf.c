#include "main.h"
#include <stdarg.h>
#include "specifier_t.h"
/**
 * format_specifier - run format specifier and print the argument
 * @pointer_string: pointer to string
 * @arg_pointer: list of arguments pointing to the value to be printed
 * @specifiers: array of specifier_t structures containing the
 * specifiers and their corresponding print functions
 * Return: total_count - number of character printed
 */
int format_specifier(const char **pointer_string, va_list arg_pointer,
specifier_t *specifiers)
{
int index = 0;
if (!pointer_string || !*pointer_string || !specifiers)
return (-1);
while (specifiers[index].specifier)
{
if (**pointer_string == specifiers[index].specifier)
return (specifiers[index].print_function(arg_pointer));
index++;
}
_putchar('%');
_putchar(**pointer_string);
return (2);
}
/**
 * _printf - function that produces output according to a format
 * @format: list of types of arguments passed to the function
 * Return: total_count - number of character printed
 *         -1 if format is NULL or invalid format specifier
 */
int _printf(const char *format, ...)
{
specifier_t specifiers[] = {
{'d', print_int},
{'i', print_int},
{'c', print_char},
{'s', print_string},
{'\0', NULL}
};
int total_count = 0;
const char *pointer_string = format;
va_list arg_pointer;
va_start(arg_pointer, format);
while (*pointer_string != '\0')
{
if (*pointer_string == '%')
{
pointer_string++;
if (*pointer_string == '\0' || *pointer_string == ' ')
return (-1);
else if (*pointer_string == '%')
{
_putchar('%');
total_count++;
}
else
total_count += format_specifier(&pointer_string,
arg_pointer, specifiers);
}
else
{
_putchar(*pointer_string);
total_count++;
}
pointer_string++;
}
va_end(arg_pointer);
if (total_count < 0)
{
a_end(arg_pointer);
return (-1);
}
return (total_count);
}
