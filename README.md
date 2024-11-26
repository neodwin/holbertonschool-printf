_printf: Custom Implementation of printf

Project Overview

This project involves creating a custom version of the standard C library printf function, _printf. The _printf function emulates the behavior of printf, producing formatted output to the standard output stream (stdout). The goal is to replicate key functionality, including handling conversion specifiers for characters, strings, integers, and more, while adhering to strict coding standards.

Compilation

The code is compiled using GCC with the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf

Requirements

	•	Operating System: Ubuntu 20.04 LTS
	•	Compiler: GCC (GNU Compiler Collection)
	•	Tools:
	•	vi, vim, or emacs editors
	•	make for build automation
	•	git for version control
	•	Authorized Functions:
	•	write, malloc, free
	•	Variadic macros (va_start, va_end, va_arg, va_copy)

All code must comply with Betty style guidelines.

Usage Examples

Below are examples of how to use _printf, showcasing its behavior compared to the standard printf function.

Example Code:

#include <stdio.h>
#include "main.h"

int main(void)
{
    int len1, len2;

    len1 = _printf("Hello, %s!\n", "World");
    len2 = printf("Hello, %s!\n", "World");

    _printf("Custom: Length: [%d]\n", len1);
    printf("Standard: Length: [%d]\n", len2);

    _printf("Character: [%c]\n", 'A');
    _printf("Integer: [%d]\n", 42);
    _printf("Hexadecimal: [%x]\n", 255);

    return (0);
}
Output:
Hello, World!
Hello, World!
Custom: Length: [13]
Standard: Length: [13]
Character: [A]
Integer: [42]
Hexadecimal: [ff]

Testing

Basic Tests

Run the following to verify functionality:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o test
./test

Memory Leak Check

Use valgrind to check for memory leaks:
valgrind --leak-check=full ./test

Expected output from Valgrind:
All heap blocks were freed -- no leaks are possible

Conclusion

This project emphasizes modular design, collaboration, and mastery of low-level programming concepts such as variadic functions and memory management. By successfully implementing _printf, developers gain a deeper understanding of how the standard printf function operates under the hood.

Authors : 
Edwin:
Ewan:
Frederic: