# Custom Printf Implementation

## Project Description

This project is a custom implementation of the C standard library's `printf` function. Our `_printf` function replicates the basic functionality of `printf`, handling various format specifiers to print formatted text to standard output.

Supported format specifiers:
- `%c`: Print a single character
- `%s`: Print a string
- `%d` and `%i`: Print integers
- `%%`: Print a percent sign

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Requirements

- Ubuntu 20.04 LTS
- GCC compiler
- Git for version control
- Code follows Betty style guidelines

## Usage Examples

```c
#include "main.h"

int main(void)
{
    /* Basic string printing */
    _printf("Hello, World!\n");          // Output: Hello, World!
    
    /* Character printing */
    _printf("Character: %c\n", 'A');     // Output: Character: A
    
    /* String printing */
    _printf("String: %s\n", "Hello");    // Output: String: Hello
    
    /* Integer printing */
    _printf("Integer: %d\n", 12345);     // Output: Integer: 12345
    _printf("Negative: %i\n", -9876);    // Output: Negative: -9876
    
    /* NULL string handling */
    _printf("NULL string: %s\n", NULL);  // Output: NULL string: (null)
    
    /* Percent sign */
    _printf("Percent sign: %%\n");       // Output: Percent sign: %
    
    return (0);
}
```

## Testing

### Basic Tests
```bash
# Compile test files
gcc -Wall -Werror -Wextra -pedantic test_printf.c printf.c functions.c _putchar.c -o test_printf

# Run tests
./test_printf
```

The test program compares the output of our _printf with the standard printf function, ensuring identical behavior and return values.

Example test output:
```
Simple test
Simple test
Test 1 - Lengths: 11, 11

Character:[H]
Character:[H]
Test 2 - Lengths: 13, 13

String:[Hello]
String:[Hello]
Test 3 - Lengths: 14, 14

Integers: [123] [-456]
Integers: [123] [-456]
Test 5 - Lengths: 22, 22
```

### Memory Check
```bash
valgrind --leak-check=full ./test_printf
```

Expected output:
```
==12345== All heap blocks were freed -- no leaks are possible
```

## Flowchart

```mermaid
flowchart TD
    Input[/"Input: Format String & Arguments"/] --> A[Start _printf]
    A --> B{Is format NULL?}
    B -->|Yes| C[/"Return: -1"/]
    B -->|No| D[Initialize specifiers and arg_pointer]
    D --> E{Is *pointer_string != '\0'?}
    E -->|No| F[End va_list]
    F --> ReturnSuccess[/"Return: total_count"/]
    E -->|Yes| G{Is *pointer_string == '%'}
    G -->|No| H[_putchar(*pointer_string)]
    H --> I[Increment total_count]
    I --> J[Increment pointer_string]
    J --> E
    G -->|Yes| K[Increment pointer_string]
    K --> L{Is *pointer_string == NULL or space?}
    L -->|Yes| M[End va_list]
    M --> ReturnError[/"Return: -1"/]
    L -->|No| N{Is *pointer_string == '%'}
    N -->|Yes| O[_putchar('%')]
    O --> P[Increment total_count]
    P --> J
    N -->|No| Q[Call format_specifier]
    Q --> R{Valid specifier found?}
    R -->|Yes| S[Increment total_count based on print_function]
    S --> J
    R -->|No| T[_putchar('%') and _putchar(*pointer_string)]
    T --> U[Increment total_count by 2]
    U --> J
    ReturnSuccess --> Output[/"Output: Formatted String"/]
    ReturnError --> Output
    Output --> End([End])
```

## Authors
- Edwin
- Ewan
- Frederic
```
