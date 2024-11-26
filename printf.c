#include "main.h"
#include <stdarg.h>

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
        int found = 0;
        int total_count = 0;

        while (specifiers[index].specifier != '\0')
int format_specifier(const char **pointer_string, va_list arg_pointer,
                specifier_t *specifiers)        {
                if (**pointer_string == specifiers[index].specifier)
                {
                        total_count += specifiers[index].print_function(arg_pointer);
                        found = 1;
                        break;
                }
                index++;
        }
        if (!found)
        {
                _putchar('%');
                _putchar(**pointer_string);
                total_count += 2;
        }
        return (total_count);
}

/**
 * _printf - function that produces output according to a format
 * @format: list of types of arguments passed to the function
 * Return: total_count - number of character printed
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
                        if (*pointer_string == '\0')
                        {
                                return (-1);
                        }
                        else if (*pointer_string == '%')
                        {
                                _putchar('%');
                                total_count++;
                        }
                        else
                                total_count += format_specifier(&pointer_string, arg_pointer, specifiers);
                }
                else
                {
                        _putchar(*pointer_string);
                        total_count++;
                }
                pointer_string++;
        }
        va_end(arg_pointer);
        return (total_count);
}
