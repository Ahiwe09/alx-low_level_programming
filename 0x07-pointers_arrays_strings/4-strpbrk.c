#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes
 *  @s: Pointer to the input string
 *  @accept: Pointer to the characters to search for
 *
 *  Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
		int r;

		while (*s)
		{
			for (r = 0; accept[r]; r++)
			{
			if (*s == accept[r])
			return (s);
			}
		s++;
		}

	return ('\0');
}
