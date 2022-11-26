#include "main.h"

/**
 * *get_func -  check the specifier
 * 
 * @format: a character to check
 * 
 * Return: a pointer to the function
*/

int (*get_func(const char *format))(va_list)
{

int i = 0;

print_f p[] = {
{"c", print_char},
{"i", print_decimal},
{"s", print_string},
{"d", print_decimal},
{"%", print_mod},
{NULL, NULL}
};

while (p[i].t)
{
if (*format == *(p[i].t))
{
return (p[i].f);
}
i++;
}
return (NULL);
}
