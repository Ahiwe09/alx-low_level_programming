#include "main.h"
/**
 * strstr - Locate the first occurrence of a substring in a string
 * @haystack: Pointer to the input string
 * @needle: Pointer to the substring to be located
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
