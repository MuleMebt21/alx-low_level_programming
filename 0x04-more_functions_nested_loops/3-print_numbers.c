#include "main.h"

/**
 * print_numbers -> print nummbers
 * Return: void
 */

void print_numbers(void)
{
char n = 0;

while (n <= 9)
{
_putchar('0' + n);
n++;
}
_putchar('\n');
}
