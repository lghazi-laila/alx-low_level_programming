#include "main.h"

/**
  * puts2 - prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: input string.
  * Return: void.
  */

void puts2(char *str)
{
/**	int i = 0;
*
*	while (str[i] != '\0')
*	{
*		_putchar(str[i]);
*		i = i + 2;
*	}
*	_putchar('\n');
*/
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

		len -= 1;

		for (; i <= len; i += 2)
			_putchar(str[i]);
	_putchar('\n');
}
