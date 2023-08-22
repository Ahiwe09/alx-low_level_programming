include "main.h"
/**
 * puts2 - the  function that prints every other
 * character of a string, starting with the first
 * character, followed by a new line.
 * @str: input
 * Return: lenght
 */
void puts2(char *str)
{
	int len = 0;
	int x = 0;
	char *j = str;
	int o;

	while (*j != '\0')
	{
		j++;
		len++;
	}
	x = len - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
