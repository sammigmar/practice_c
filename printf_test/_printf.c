#include "main.h"
/**
 * _printf - printf to stdout formatted text
 *
 * @format: format specififer
 * Return: no of bytes printed
 */
int_printf(const char *format, ...)
{
  unsigned int i; count = 0;

  va_list args;

  vaa_start(args, format);

  for (i = 0; format [i] != '\0'; i++)
    {
      if (format[i] != '%')
