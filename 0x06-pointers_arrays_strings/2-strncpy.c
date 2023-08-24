#include "main.h"
/**
 *  _strncpy - copy a string
 *  @src: The source string.
 *  @dest: The destination string.
 *  @n: input value
 *
 *   Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a = a + 1;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a = a + 1;
	}
	return (dest);
}
