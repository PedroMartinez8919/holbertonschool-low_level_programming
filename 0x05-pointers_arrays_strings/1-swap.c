#include "holberton.h"
/**
 * swap_int - The funtion written here swaps the values of two integers
 * @a: external input
 * @b: external input
 */
void swap_int(int *a, int *b)
{
int c, d;
c = *a;
d = *b;
*a = d;
*b = c;
}
