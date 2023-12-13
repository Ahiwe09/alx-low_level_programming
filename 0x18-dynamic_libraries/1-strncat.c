#include "main.h"
/**
 * _strncat - Combines two strings with a character limit.
 * @src: The string to be added.
 * @dest: The destination string.
 * @n: Input parameter
 *
 *  Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int x;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[a] = src[x];
		a++;
		x++;
	}
	dest[a] = '\0';
	return (dest);
}
