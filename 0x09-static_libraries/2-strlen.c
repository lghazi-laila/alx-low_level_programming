#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: input character.
  * Return: length of the string.
  */

int _strlen(char *s)
{
	int L = 0;

	while (s[L] != '\0')
		L++;
	return (L);
}

