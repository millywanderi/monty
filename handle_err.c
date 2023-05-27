#include "monty.h"

/**
 * print_err - prints file message error
 * @argv: argument vector
 * Return: void
 */
void print_err(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * print_file_err - prints file error message
 * Return: void
 */
void print_file_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
