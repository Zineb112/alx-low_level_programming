#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file name to create.
 * @text_content: text content to write.
 * Return: 1 on success 0 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
