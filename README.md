
# Printf 42

The project consist in duplicate the `printf()` function, part of the `stdio.h` library.

## About

This project consists in duplicate the behavior of the C function printf(). It is not necessary to implement the buffer management of the original function. It must handle the following parameters:

`char` type variables.

`string` type variables.

`int` type variables.

`unsigned int` type variables.

hexadecimal `int` type variables (uppercase and lowercase).

`pointer` type variables.

Structure 

The main obstacles during the execution of the project have been: handling a variable number of parameters and the function `ft_printf()` returning an `int`.

va_list

To deal with the variable number of parameters entered, the macros `va_list`, `va_start`, `va_arg` and `va_end` have been used. The `ft_printf()` function calls the `ft_format()` function when it finds the % sign among the entered parameters, then it checks the next character in the string to call one of the functions that print the different variable types. To use this macro, the libraryt `<stdarg.h> `is included in the `ft_printf.h.`

## Instructions

1. Compiling the archive

To compile the proiect, go to its path and run:

For mandatory functions:

`$ make `

2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:

'$ make fclean``

3. Using it in your code

To use this project in your code, simply include this header:

`#include "ft_printf.h"`

## Testing

This function have been tested with:

 https://github.com/xicodomingues/francinette
