#include <stdio.h>
#include "main.h"

/**
 *_isdigit - prints if a digit is detected
 *Description: prints if a digit is detected
 *@c - the digit to be tested
 *Return: 1 if c is a digit
 *Otherwise: Return 0
 *
 */

int _isdigit(int c)
{
if (c >= 0 && c < 10)
{
return (1);
}
else
{
return (0);
}
}
