#include "main.h"
/**
 * _strcat - Concatenates two strings together.
 *  @dest: The destination string.
 * @src: The source string.
 *
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int c;

	n=0;


	while (dest[n] != '\0')
	{
		n++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[n] = src[c];
		n++;
		c++;
	}

	dest[n] = '\0';
	return (dest);
}
