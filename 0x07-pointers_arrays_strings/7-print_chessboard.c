#include "main.h"
/**
 * print_chessboard - Print a chessboard
 * @a: Pointer to the 2D array representing the chessboard
 *
 * Return: 0.
 */
void print_chessboard(char (*a)[8]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
