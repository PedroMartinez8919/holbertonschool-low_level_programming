#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numbs = '0';
while (numbs <= '9')
{
putchar(numbs);
numbs++;
}
putchar('\n');
return (0);
}
