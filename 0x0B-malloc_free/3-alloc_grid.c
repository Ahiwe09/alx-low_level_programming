#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **car;

	int x, i;

	if (width <= 0 || height <= 0)

		return (NULL);

	car = malloc(sizeof(int *) * height);

	if (car == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		car[x] = malloc(sizeof(int) * width);

		if (car[x] == NULL)
		{
			for (; x >= 0; x--)
				free(car[x]);
			free(car);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (i = 0; i < width; i++)

			car[x][i] = 0;
	}
	return (car);
}
