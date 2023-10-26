#include"main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: get_bit
 * @index: index, starting from 0
 *
 * Return: get_bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, checks;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
checks = n & div;
if (checks == div)
return (1);
return (0);
}
