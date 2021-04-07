#include "holberton.h"
void swap_int(int *a, int *b)
{
  int swap;
  /* store the value located at address of a */
  swap = *a;
  /* reassign the value of *a to the value of *b */
  *a = *b;
  *b = swap;
}
