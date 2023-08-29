#include "main.h"
/**
 * strstr - Locate the first occurrence of a substring in a string
 * @haystack: Pointer to the input string
 * @needle: Pointer to the substring to be located
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*n && *h == *n)
	{
		h++;
		n++;
	}

	if (!*n)
	{
		return (haystack);
	}

	return (0);
}
