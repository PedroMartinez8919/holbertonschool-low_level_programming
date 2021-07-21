#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbers = 0;
while (numbers >= 0)
{ printf("%d\n", numbers);
numbers++;
if (numbers >= 10)
{ break;
numbers++;
}
}
return (0);
}
