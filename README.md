#ft_printf
Overview
ft_printf is a custom implementation of the standard printf function in C. It provides formatted output conversion and prints data to the standard output.

Files and Their Roles
Header File
ft_printf.h: This header file includes necessary library imports and contains function prototypes for all the functions used in the ft_printf implementation.
Source Files
ft_printf.c: Contains the main ft_printf function and a helper function handle_format that handles different format specifiers.
ft_putaddress.c: Defines the function ft_putaddress which prints memory addresses in hexadecimal format.
ft_putchar.c: Defines the function ft_putchar which prints a single character.
ft_puthex.c: Defines the function ft_puthex which prints numbers in hexadecimal format, supporting both lower and upper case.
ft_putnbr.c: Defines the function ft_putnbr which prints an integer.
ft_putstr.c: Defines the function ft_putstr which prints a string.
ft_utnbr.c: Defines the function ft_utnbr which prints an unsigned integer.
Makefile
Makefile: Automates the build process for the ft_printf project. It compiles the source files into object files and then archives them into a static library libftprintf.a. It also includes commands for cleaning up object files and rebuilding the project.
Installation
To compile the ft_printf library, use the following commands:

make
To clean up object files:

make clean
To clean up object files and the library:

make fclean
To rebuild the project from scratch:

make re
Usage
Include the ft_printf.h header file in your project and link against the libftprintf.a library to use the ft_printf function.


#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
