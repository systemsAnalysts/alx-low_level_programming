#include "main.h"
/**
*print_numbers - prints numbers from zero to 9
*Return: number line from 0 - 9
*/
void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
{
if ((i == 50) | (i  == 52))
continue;
_putchar(i);
}
_putchar('\n');
}
