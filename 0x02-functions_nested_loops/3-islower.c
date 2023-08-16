#include "main.h"
/**
 *_islower - checks if a character is lowercase
 *@c: Character to check
 *
 *Return: 1 if c is lowercase
 *Otherwise 0
 *
 */
int _islower(int r)
{
if (r >= 'a' && r <= 'z')
{
return (1);
}
 else
{
return (0);
}
}
