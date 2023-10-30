#include "main.h"

/**
 * read_textfile - read a text file, prints it to  POSIX standard output
 * @filname: name of files to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lnr, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	lrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buf, lrd);

	close(fd);

	free(buffer);

	return (nwr);
}
