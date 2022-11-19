#ifndef MAIN_H
#define MAIN_H 

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


//          Prototypes          //

int _printf(const char *format, ...);


#endif