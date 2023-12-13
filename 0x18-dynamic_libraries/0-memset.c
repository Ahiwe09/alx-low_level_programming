#include "main.h"
/**
 * _memset - fill a range of memory with a specified value
 * @s: starting address of memory region
 * @b: value to be set
 * @n: number of bytes to be set
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i = i + 1)
	{
		s[i] = b;
		n = n - 1;
	}
	return (s);
}
