#include <stdio.h>
#include "main.h"

/**
 *_isupper - prints the capital version
 *Description: primts the capital version
 *
 *@c - the value to be tested
 *Return: 1 if uppercase
 *Otherwise: 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
