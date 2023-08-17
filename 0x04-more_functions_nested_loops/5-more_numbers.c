#include <stdio.h>
#include "main.h"
/**
 *more_numbers - prints more numbers
 *Description: prits more numbers
 *
 *Return: 0
 *
 */
void more_numbers(void)
{
int a;
int b;
for ( a = 0; a < 10; ++a)
{
for ( b = 0; b <= 14; ++b)
{
if (b > 9)
putchar('0' + b / 10);
putchar('0' + b % 10);
}
putchar('\n');
}
}
