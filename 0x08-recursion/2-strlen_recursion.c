#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string.
  *
  * @s: input string
  *
  * Return: int
  */

int _strlen_recursion(char *s)
{
	int L;

	if (*s)
	{
		L = L + 1;
		_strlen_recursion(s + 1);
	}
	Return(L);
}

