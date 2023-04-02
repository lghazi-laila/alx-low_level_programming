#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: input string
  * Return: void.
  */

void rev_string(char *s)
{
	int L = 0;
	int i;
	char *t = 0;

	while (s[L] != '\0')
		L++;

	for (i = L - 1; i >= 0; i--)
		t[L - i - 1] = s[i];

	for (i = 0; i < L; i++)
		s[i] = t[i];

}
