#ifndef SPECIFIER_T_H
#define SPECIFIER_T_H
/**
 * struct specifier_t - data structur
 * @specifier: a variable
 * @print_function: a pointer
 */
typedef struct specifier_t
{
char specifier;
int (*print_function)(va_list);
} specifier_t;
#endif
