#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return:Always  0
 */
int main(void)
{
int numb = '0';
while (numb <= '9')
{
putchar(numb);
if (numb < '9')
{
putchar(',');
putchar(' ');
}
numb++;
}
putchar('\n');
return (0);
}
