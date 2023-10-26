#include "main.h"

/**
 * _pow - func calculates (bottom ^ force)
 * @bottom: base of the exponent
 * @force: power of the exponent
 *
 * Return: value of (bottom ^ force)
 */
unsigned long int _pow(unsigned int bottom, unsigned int force)
{
unsigned long int num;
unsigned int a;

num = 1;
for (a = 1; a <= force; a++)
num *= bottom;
return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
