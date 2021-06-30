#include "holberton.h"
/**
 * _strlen - The function return the length of a string.  
 *
 * @s:is the pointer.
 * Return: slong
 */
int _strlen(char *s)
{
	int slong = 0;

	while (*s != '\0')
	{
		slong++;
		s++;
	}
	return (slong);
}
