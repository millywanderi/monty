#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: vector argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int stat = 0;
	FILE *fp;
	char *buf = NULL;
	char *str = NULL;
	size_t length = 0;
	stack_t *sta = NULL;
	unsigned int line_num = 1;

	args.trend = 1;
	if (argc != 2)
		print_file_err();
	fp = fopen(argv[1], "r");
	if (!fp)
		print_err(argv[1]);
	while ((getline(&buf, &length, fp)) != (-1))
	{
		if (stat)
			break;
		if (*buf == '\n')
		{
			line_num++;
			continue;
		}
		args.arg = strtok(NULL, DELIM);
		opc(&sta, str, line_num);
		line_num++;
	}
	free(buf);
	f_stack(sta);
	fclose(fp);
	exit(EXIT_SUCCESS);
}
