#include <stdio.h>
#include "main.h"

/**
 *print_numbers - prints numbers
 *Description: primts numbers
 *Return: 0
 *
 *
 *
 *
 */
void print_numbers(void)
{
int c;
for (c = 0; c < 10; ++c)
{
putchar('0' + c);
}
putchar('\n');
}
