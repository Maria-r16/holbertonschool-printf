<h1> PROYECT PRINTF </h1>
This project consists of printing the formatted output, that is, it will print according to the entered type.

<h2> Function prototypes </h2>
All function prototypes used to compile _printf() are included in the header file main.h:

-   int (*get_func(const char *format))(va_list);

-	int _printf(const char *format, ...);

-	int _putchar(char c);

-	int print_string(va_list arguments);

-	int print_char(va_list arguments);

-	int print_mod(va_list arguments);

-	int print_decimal(va_list arguments);


<h2> File description </h2>

_putchar.c - contains the function _putchar().

get_func.c -  contains the function get_func().

main.h - contains all headers, prototypes and structure declaration, and the functions print_char, print_string, print_mod, print_decimal, for the case of printing character, string, modulator '%', decimal and integer.

man_3_printf - manual page for function _printf().

_printf.c - contains the function print_f().

<h2> Function description </h2>

int _printf(const char *format, ...)


<h3> The conversion specifier </h3>
The program includes the following conversion specifiers:
c: character to be provided for printing.
i: integer to be provided for printing.
s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string).
d: decimal number to be provided for printing.
%: A per cent sign '%' is written. No argument is converted.

<h3> Return value </h3>
Upon success, printfs return the number of characters printed (excluding the null byte used to end output to strings) A negative 1 is returned if an output error is encountered.

<h3> Function of each prototype </h3>
<h5> int (*get_func(const char *format))(va_list): </h5>
<em>This function called by _printf() and checks for valid conversion specifier when it finds a '%' character. The *get_func function will check for the right conversion specifier.</em>

<h5>int _putchar(char c):</h5> 
<em>writes the character c to standard output.</em>

<h5>int print_char(va_list arguments):</h5>
<em>This function gets a variadic argument and prints each character of char type.</em>

<h5>int print_string(va_list arguments):</h5>
<em>This function gets a variadic argument, traverse the string, and prints a character at a time.</em>

<h5>int print_mod(va_list arguments):</h5>
<em>This function prints a per cent sign '%'.</em>

<h5>int print_decimal(va_list arguments):</h5>
<em></em>
