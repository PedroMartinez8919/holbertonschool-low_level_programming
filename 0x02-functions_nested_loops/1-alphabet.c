#include "holberton.h"
/**
 * print_alphabet - This function prints the alphabet from a to z.
 *
 * Return : The function does not have a return values.
 */
void print_alphabet(void)
{
char alphabe_t = 'a';
while (alphabe_t <= 'z')
{
_putchar (alphabe_t);
alphabe_t++;
}
_putchar ('\n');
}
