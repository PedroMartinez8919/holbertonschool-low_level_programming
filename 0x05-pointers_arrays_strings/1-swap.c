#include "holberton.h"
void swap_int(int *a, int *b)
{
  int c;
  /* store the value located at address of a */
  c = *a;
  /* reassign the value of *a to the value of *b */
  *a = *b;
  *b = c;
}
