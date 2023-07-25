#include "main.h"

/**
 * _printd - prints in format %i and %d.
 *
 * @format: format to print in.
 * @num: number to convert to char
 * Return: len of string.
 */
int _printd(char *format, int num)
{
	char *buff;
	int len, i = 0;

	buff = malloc(sizeof(char) * 10);
	if (!buff)
		return (0);
	len = sprintf(buff, format, num);

	while (i < len)
		_putchar(buff[i++]);

	free(buff);
	return (len - 1);
}
