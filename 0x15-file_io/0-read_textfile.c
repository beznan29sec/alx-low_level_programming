#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
	return (-1);

	if (letters != NULL)
	{
	int bytes_written = write(fd, letters, strlen(letters));

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
		}
	}
	close(fd);
	return (1);
}
