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
	int n = 0;
	int c = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[c] != '\0')
	{
		if (n < MAX_DEST_LENGTH - 1)
		{
			dest[n] = src[c];
			n++;
		}
		c++;
	}

	dest[n] = '\0';

	return (dest);
}
