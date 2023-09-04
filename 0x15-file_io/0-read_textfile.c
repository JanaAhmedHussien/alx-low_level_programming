#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: bytes to read
 * Return: if the file can not be opened or read, return 0
 * filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

int f;
ssize_t bytes;
char buffer[R_BUFFER_SIZE * 8];
if (!filename || !letters)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
bytes = read(f, &buffer[0], letters);
bytes = write(STDOUT_FILENO, &buffer[0], bytes);
close(f);
return (bytes);

}
