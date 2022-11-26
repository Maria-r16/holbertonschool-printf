#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>



int _putchar(char c);
int print_char(va_list arguments);
int print_string(va_list arguments);
int print_mod(va_list arguments);
int print_decimal(va_list arguments);
int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);

/*functions*/

/**
* struct print - Typedef struct
* @print: pointer to the argument
* @f: The function associated
*/
typedef struct func_type
{
char *print;
int (*f)(va_list);
} print_f;


/** print_char - print character
* @arguments: argument pointer
* Return: num of parameters printed
*/
int print_char(va_list arguments)
{
_putchar(va_arg(arguments, int));
return (1);
}

/** print_string - print string
* @arguments: argument pointer
* Return: num of parameters printed
*/
int print_string(va_list arguments)
{
int i = 0;
char *string = va_arg(arguments, char *);

if (string == NULL)
string = "(null)";

while (string[i] != '\0')
{
_putchar(string[i]);
i++;
}
return (i);   
}


/** print_mod - print percent
* @arguments: argument
* Return: 1
*/
int print_mod(va_list arguments)
{
(void)arguments;

_putchar('%');
return (1);
}


/** print_decimal - print a decimal and integer
* @arguments: argument
* Return: counter
*/
int print_decimal(va_list arguments)
{

int value;
unsigned int abs, a, len = 0;
unsigned int countn = 1;

value = va_arg(args, int);

if (value < 0)
{
len = len + _putchar('-');
abs = value * -1;
}
	
else
abs = value;
a = abs;
while (a > 9)
{
a = a / 10;
countn = countn * 10;
}
while (countn >= 1)
{
len = len + _putchar(((abs / countn) % 10) + '0');
countn = countn / 10;
}
return (len);
}

#endif