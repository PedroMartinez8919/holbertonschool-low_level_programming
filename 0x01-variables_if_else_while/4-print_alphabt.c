#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char alph = 'a';
while (alph <= 'z')
{
if (alph == 'q' || alph == 'e')
{
alph++;
}
else
{
putchar (alph);
alph++;
}
}
putchar ('\n');
return (0);
}
