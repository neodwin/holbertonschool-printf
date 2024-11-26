#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int format_specifier(const char **pointer_string, va_list arg_pointer,
		specifier_t *specifiers);

#endif /* MAIN_H */
