#include "main.h"

/**
  * _islower - Description:
  * Description : checks for lowercase character.
  *
  * @c : input character
  *
  * Return: 1 if is lowercase or 0 if is uppercase.
  */
int _islower(int c)
{
	char i;
	int loxer = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
