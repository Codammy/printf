#include "main.h"

/**
 * _string - case s or c
 *
 * @str: char or string
 * Return: no. of char printed
 */
int _string(char *str)
{
	int j;

	j = 0;
	if (!str)
	{
		j = _printf("(null)");
		return (j - 1);
	}
	while (str[j])
		_putchar(str[j++]);

	return (j - 1);
}
