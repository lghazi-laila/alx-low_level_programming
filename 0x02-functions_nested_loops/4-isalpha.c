#include "main.h"

/**
  * _isalpha - Description:
  * Description :checks for alphabetic character.
  *
  * @c : input character
  *
  * Return: 1 if c is letter or 0 otherwise.
  */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
