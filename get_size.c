#include "main.h"
/**
 * get_size - Calculates the size to cast the argument
 *
 * @format: Formatted string in which to print the arguments
 * @m: List of arguments to be printed.
 * Return: Precision.
 */
int get_size(const char *format, int *m)
{
int curr_m = *m + 1;
int size = 0;
if (format[curr_m] == 'l')
size = S_LONG;
else if (format[curr_m] == 'h')
size = S_SHORT;
if (size == 0)
*i = curr_m - 1;
else
*i = curr_m;
return (size);
}

