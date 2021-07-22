#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int numb = '0';
char letter = 'a';
while (numb <= '9')
{ putchar (numb);
numb++;
}
while (letter <= 'f')
{ putchar (letter);
letter++;
}
putchar ('\n');
return (0);
}
