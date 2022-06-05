#include "main.h"
/**
 * read_textfile - reads from a file and prints to stdout
 * @filename: The name of the file to read from
 * @letters: Numbers of letters to print
 *
 * Return: Numbers of chars it could print, 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rdn, wrn;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	rdn = read(fd, buff, letters);
	wrn = write(STDOUT_FILENO, buff, rdn);
	close(fd);
	free(buff);

	return (wrn);
}
