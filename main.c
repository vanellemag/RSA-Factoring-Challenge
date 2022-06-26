#include "sra.h"
/**
 * main - main function that factorize all number
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *file;
	int buf;
	size_t  linenumber = 0;
	ssize_t number;
	char *buffer = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Syntax: ./program file\n");
		exit(97);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("failed to open file");
		exit(1);
	}
	while ((number = getline(&buffer, &linenumber, file)) != -1)
	{
		fwrite(buffer, number, 1, stdin);
		buf = atoi(buffer);
		factoriser(buf);
	}
	fclose(file);
	free(buffer);
	exit(EXIT_SUCCESS);
}
