#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib>
#include <stdarg.h>


//  PROTOTYPES //
int _printf(const char *format, ...);
int _putchar(char c);
int type_char(va_list valist);
int type_string(va_list valist);
int type_decimal(va_list valist);
int type_percent(__attribute__((unused))va_list valist);


// FUNCTIONS //
/**
* struct print - Typedef struct
*
* @type: print
*
* @f: The function associated
*/
typedef struct print
{
char *print;
int (*f)(va_list);
} print_f;


/** type_char -
*
* @valist:
*
* Return:
*/
int type_char(va_list valist)
{}


/** type_string -
*
* @valist:
*
* Return:
*/
int type_string(va_list valist)
{}

/** type_decimal -
*
* @valist:
*
* Return:
*/
int type_decimal(va_list valist)
{}


/** type_percent -
*
* @valist:
*
* Return:
*/
int type_percent(__attribute__((unused))va_list valist)
{}

#endif