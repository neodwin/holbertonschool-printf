#include "main.h"
#include <stddef.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
    const spec_t specs[] = {
        {'c', print_char},
        {'s', print_string},
        {'d', print_int},
        {'i', print_int},
        {'u', print_unsigned},
        {'o', print_octal},
        {'x', print_hex_lower},
        {'X', print_hex_upper},
        {'p', print_pointer},
        {'%', print_percent},
        {'\0', NULL}
    };
    int j, found;

    if (format == NULL)
        return (-1);

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            j = 0, found = 0;
            i++;
            if (!format[i])
            {
                va_end(args);
                return (-1);
            }
            while (specs[j].spec != '\0' && !found)
            {
                if (format[i] == specs[j].spec)
                {
                    count += specs[j].f(args);
                    found = 1;
                }
                j++;
            }
            if (!found)
                count += _putchar('%') + _putchar(format[i]);
        }
        else
            count += _putchar(format[i]);
        i++;
    }
    va_end(args);
    return (count);
}