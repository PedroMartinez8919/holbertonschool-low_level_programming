#include "holberton.h"
/**
 * This function prints the alphabet.
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
