#include "main.h"

/**
 * _printf - function that produces output according to a format
 * 
 * @format: contents or format specifier
 * 
 * Return: the number of characters printed
*/

int _printf(const char *format, ...)
{

va_list const;
int count;

print_f get_opt[] = {
{"c", type_char},
{"s", type_string},
{"i", type_decimal},
{"d", type_decimal},
{"%", type_percent},
{NULL, NULL}
};

if (!format)
{
return (-1);
}

va_start(const, format);
count = parse_format(format, get_opt, const);
va_end(const);

return (count);
}