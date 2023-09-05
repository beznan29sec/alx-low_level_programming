#include "main.h"
/**
 * read_textfile- a function that  reads text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: no_ch- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d;
	ssize_t no_ch;
	ssize_t s;
	char *file_content;

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);
	file_content = malloc(sizeof(char) * letters);
	s = read(file_d, file_content, letters);
	no_ch = write(STDOUT_FILENO, file_content, s);

	free(file_content);
	close(file_d);
	return (no_ch);
}
