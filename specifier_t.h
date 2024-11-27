#ifndef SPECIFIER_T_H
#define SPECIFIER_T_H

typedef struct specifier_t
{
        char specifier;
        int (*print_function)(va_list);
} specifier_t;

#endif
