#include "main.h"
/**
 * _myprintf_oct - function prints an octal number.
 * @val: variable arguments.
 * Return: returns counter.
 */
int _myprintf_oct(va_list val)
{
int i;
int *array;
int counter = 0;
unsigned int num = va_arg(val, unsigned int);
unsigned int temp = num;
while (num / 8 != 0)
{
num /= 8;
counter++;
}
counter++;
array = malloc(counter *sizeof(int));
for (i = 0; i < counter; i++)
{
array[i] = temp % 8;
temp /= 8;
}
for (i = counter - 1; i >= 0; i--)
{
_my_putchar(array[i] + '0');
}
free(array);
return (counter);
}
