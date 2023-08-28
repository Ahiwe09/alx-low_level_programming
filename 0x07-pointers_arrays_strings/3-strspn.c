#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: Pointer to the input string
 * @accept: Pointer to the characters to be matched
 *
 *  Return: Always 0
 */
unsigned int _strspn(char *s, char *accept);
{
	unsigned int n = 0;
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c = c + 1)
		{
			if (*s == accept[c])
			{
				n = n + 1;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (n);
		}
		s = s + 1;
	}
	return (n);
}
