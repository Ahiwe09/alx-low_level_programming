#include "main.h"
/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the input string
 * @c: Character to be located
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
