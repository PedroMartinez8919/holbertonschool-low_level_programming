#include "holberton.h"
/**
 *The function _isalpha - check if 'c' is alphabetic character
 *@c: is entry point
 *Return: 1 in case of alphabet.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
