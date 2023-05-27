#include "monty.h"

/**
 * dig - checks if str has a digit
 * @string: string to be checked
 * Return: Always 0, otherwise 1
 */
int dig(char *string)
{
	if (!string || *string == '\0')
	{
		return (0);
	}
	if (*string == '-')
	{
		string++;
	}
	while (*string)
	{
		if (isdigit(*string) == 0)
		{
			return (0);
		}
		string++;
	}
	return (1);
}
