#ifndef MAIN_H
#define MAIN_H
/* Includes standards */
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
/* Structure pour les spécificateurs de format */
/**
 * struct specifier - Structure for format specifiers
 * @spec: The specifier character
 * @f: The function associated
 */
typedef struct specifier
{
char spec;
int (*f)(va_list);
} spec_t;
/* Prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_pointer(va_list args);
int _putchar(char c);
#endif /* MAIN_H */
