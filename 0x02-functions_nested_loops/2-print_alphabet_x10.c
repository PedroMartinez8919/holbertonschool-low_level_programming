#include "holberton.h"
/**
 * print_alphabet_x10 - The function print_alphabet_x10 print the alphabet 10 times.
 *
 * Return: The funcion don't have a return value.
 */
void print_alphabet_x10(void)
{
int a = 10;
while (a < 10)
{
char alpha10 = 'a';
while (alpha10 <= 'z')
{
_putchar(alpha10);
alpha10++;
}
_putchar('\n');
a++;
}
}
 
