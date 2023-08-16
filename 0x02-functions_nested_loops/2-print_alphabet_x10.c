#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints 10x the alphabet
 *
 *Description: prints alphabet x10
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
int c;
int j;
for (c = 0; c < 10; ++c)
{
for (j = 'a'; j <= 'z'; ++j)
{
putchar(j);
}
putchar('\n');
}
}
