#include "holberton.h"
/**
 * The function print_alphabet prints the alphabet from a to z.
 *
 * Return : No return values.
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
