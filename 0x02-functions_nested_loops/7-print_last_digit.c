#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *Description: prints the last digit of a number
 *@c: the value to check
 *
 *Return: 0
 *
 */
int print_last_digit(int c)
{
c = c % 10;
if (c < 0)
c = -1 * c;
_putchar('0' + c);
return (c);
}
