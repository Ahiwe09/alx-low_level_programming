#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int i = n;

	for (; c < i; c = c + 1)
	{
		dest[c] = src[c];
		n = n - 1;
	}
	return (dest);
}
