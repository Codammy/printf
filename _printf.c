#include "main.h"

/**
 * _printf - prints to stdout with format specifiers
 *
 * @format: to be printed
 * Return: no. of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list opt;
	int num = 0, len, i = 0;

	if (!format)
		return (0);
	va_start(opt, format);
	len = strlen(format);
	while(i < len)
	{
		if (format[i] == '%')
			switch (format[i + 1])
			{
				case '%':
					_putchar('%');
					i++;
					break;
				case 'c':
					_putchar (va_arg(opt, int));
					i++;
					break;
				case 's':
					num += _string(va_arg(opt, char *));
					i++;
					break;
				case 'i':
					num += _printd("%i", va_arg(opt, int));
					i++;
					break;
				case 'd':
					num += _printd("%d", va_arg(opt, int));
					i++;
					break;
			}
		else
			_putchar(format[i]);
		i++;
		num++;
	}
	return (num);
}
