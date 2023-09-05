#include "main.h"
#include <stdlib.h>
/**
 * str_concat - This function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 , s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ran;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = ran = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ran] != '\0')
		ran++;
	concat = malloc(sizeof(char) * (i + ran + 1));
	if (concat == NULL)
		return (NULL);

	i = ran = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[ran] != '\0')
	{
		concat[i] = s2[ran];
		i++, ran++;
	}
	concat[i] = '\0';
	return (concat);
}

