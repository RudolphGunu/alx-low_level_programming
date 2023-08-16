#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints the alphabet
 *Description: prints the alphabet in lower case
 *Return: void
 *
 *
 */

void print_alphabet(void)

{
int c;

for (c = 'a'; c <= 'z'; ++c)
putchar(c);
putchar('\n');

}
