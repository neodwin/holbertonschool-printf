#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include "specifier_t.h"

int _putchar(char c);
int _printf(const char *format, ...);
int format_specifier(const char **pointer_string, va_list arg_pointer,
		specifier_t *specifiers);

#endif
