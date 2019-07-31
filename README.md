#_printf

#DESCRIPTION
_printf \- function that prints data. The printf repository contains the files required to run the _printf program written in the C programming language. The _printf function is a simplified replicate of the function printf included in the standard library <stdio.h>. The files must be compiled to produce an executable file.

#C LANGUAGE STANDARD FUNCTIONS USED
`va_start`, `va_arg`, `va_end`

#BRIEF SYNOPSIS


#USAGE
The following command compiles the files includes in the printf repository:
```$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c```

In the C programming language, the function _printf relies on the following prototype:
```$ _printf(const char *[FORMAT], ...)```

where FORMAT corresponds to a string that contains one or several format specifiers, such as '%s' for strings, '%c' for characters, '%i' for integers, '%d' for decimals or '%b' for binaries. 

#TESTS
Tests can be run by compiling with a test file `main.c`, using the following command lines:
```$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c```
```$ ./a.out```

#AUTHORS
Jasmine Harris & Pierre Beaujuge