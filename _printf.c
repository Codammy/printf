
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
		return (-1);
	va_start(opt, format);
	len = strlen(format);
	while (i < len)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 0)
				return (-1);
			if (format[i + 1] == '!' || format[i + 1] == 'K')
			{
				_putchar('%');
				_putchar(format[i + 1]);
			}
			if (format[i + 1] == '%')
				_putchar(format[i + 1]);
			if (format[i + 1] == 'c')
				_putchar (va_arg(opt, int));
			if (format[i + 1] == 's')
				num += _string(va_arg(opt, char *));
			if ((format[i + 1] == 'i') || (format[i + 1] == 'd'))
				num += _printd("%d", va_arg(opt, int));
			i++;
		}
		else
			_putchar(format[i]);
		i++;
		num++;
	}
	return (num);
}
