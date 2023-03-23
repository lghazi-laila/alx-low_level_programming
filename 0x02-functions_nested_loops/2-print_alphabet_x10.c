#include "main.h"

/**
  * print_alphabet_x10 - Description:
  * Description : prints 10 times the alphabet, followed by a new line.
  *
  * return : nothing.
  */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
