#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters to print.
 *
 * Return: number of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char *buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(fd);
		return (0);
	}

	ssize_t nrd = read(fd, buf, letters);
	ssize_t nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}

