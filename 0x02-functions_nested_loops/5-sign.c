#include "holberton.h"
/**
 *The function print_sing - Prints the sign of a int.
 *@c: this value is a integer.
 *Return: Three option of values can be 1, 0, -1
 */
int print_sign(int n)
{
while (n > 0)
{ _putchar ('+');
return (1);
}
if (n < 0)
{  _putchar ('-');
return (-1);
}
else
{   _putchar ('0');
return (0);
}
}
