#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the file name.
 * @letters: the bytes number.
 * Return: the actual number of letters
 * it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char buf[READ_BUF_SIZE * 8];
	ssize_t bytes_num;

	if (!filename || !letters)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	bytes_num = read(fp, &buf[0], letters);
	bytes_num = write(STDOUT_FILENO, &buf[0], bytes_num);
	close(fp);

	return (bytes_num);
}
