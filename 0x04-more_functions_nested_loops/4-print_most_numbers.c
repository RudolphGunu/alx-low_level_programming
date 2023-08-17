#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers - [rints most numbers
 *Description: prints most numbers
 *
 *Return: 0
 *
 *
 */

void print_most_numbers(void)
{
int c;
for (c = 0; c < 10; ++c)
{
if (c != 2 && c != 4)
putchar('0' + c);
}
putchar('\n');
}
