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
	int x;

	n=0;


	while (dest[n] != '\0')
	{
		n++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[n]=src[x];
		n++;
		x++;
	}

	dest[n]='\0';
	return (dest);
}
