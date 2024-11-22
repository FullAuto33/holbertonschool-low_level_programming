#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct formats_f - struct to map format specifiers to functions
 * @n: format specifier character
 * @f: function pointer to the corresponding print function
 */
typedef struct formats_f
{
    char n;
    void (*f)(va_list);
} formats_f;

/**
 * print_char - print char
 * @arg: argument char
 *
 * Return: Always 0.
 */

void print_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}

/**
 * print_int - print int
 * @arg: argument int
 *
 * Return: Always 0.
 */

void print_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}

/**
 * print_float - print float
 * @arg: argument float
 *
 * Return: Always 0.
 */

void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}

/**
 * print_str - print str
 * @arg: argument char
 *
 * Return: Always 0.
 */


void print_str(va_list arg)
{
char *n = va_arg(arg, char *);
if (n == NULL)
{
printf("(nil)");
return;
}
printf("%s", n);
}


/**
 * print_all - print all
 * @format: format to char
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
formats_f formats[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_str},
{'\0', NULL}
};

va_list arg;
char *separator1 = "";
char *separator2 = ", ";
int compteur1 = 0;
int compteur2;

va_start(arg, format);

while (format != NULL && format[compteur1] != '\0')
{
compteur2 = 0;
while (formats[compteur2].n != '\0')
{
if (format[compteur1] == formats[compteur2].n)
{
printf("%s", separator1);
formats[compteur2].f(arg);
separator1 = separator2;
}
compteur2++;
}
compteur1++;
}
va_end(arg);
printf("\n");
}
