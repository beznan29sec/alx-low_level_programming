#include "main.h"
/**
 * create_file -a function that  creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int s;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(file_d, text_content, i);
	if (file_d == -1 || s == -1)
		return (-1);
	close(file_d);
	return (1);
}
