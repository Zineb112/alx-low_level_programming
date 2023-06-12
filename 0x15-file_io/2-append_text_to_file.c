#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: text content to write.
 * Return: 1 on success 0 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
