# ft_printf

This project is an implementation of the C library function `printf`. This custom `ft_printf` function mimics the original `printf` behavior, handling various format specifiers and flags.

## Project Overview

`ft_printf` is part of the 42 school curriculum, designed to teach students about variadic functions and how to handle formatted output. The project involves creating a library that contains a simplified version of the `printf` function, learning to use variadic arguments, and understanding the intricacies of formatted output in C.

## Features

- Handles conversion specifiers: `%`, `c`, `s`, `p`, `i`, `d`, `u`, `x`, `X`.
- Implements width and precision fields.
- Manages the `*` wildcard for width and precision.

## Usage

To compile the library, run:

```bash
make
```
## Include the header in your C files:
```
#include "ft_printf.h"
```
## Compile your project with the library:
```
gcc -Wall -Wextra -Werror -I. -c your_c_files.c
gcc -o your_program your_c_files.o -L. -lftprintf
```
## Example
Here’s a simple example of using ft_printf in a program:
```
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, 1337! This is a number: %d\n", 1337);
    return (0);
}
```

## Contributors
hamza chadili
