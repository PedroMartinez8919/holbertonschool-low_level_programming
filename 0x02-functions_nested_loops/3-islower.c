#include "holberton.h"
/**
 * The is _islower function - Checks if the char'c' is lower
 *@c: is entry point
 *Return: 1 if char is lower.
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
