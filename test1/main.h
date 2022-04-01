#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 *  * struct specifier - Struct format
 *   * @valid: Format
 *    * @f: Function to print
 *     */
typedef struct specifier
{
		char *valid;
			int (*f)(va_list);
} spec;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_percent(va_list args);
int (*get_func(const char *format))(va_list);
#endif

