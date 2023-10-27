#include "main.h"

/**
 * set_bit - value of a bit to 1 at a given index
 * @n: number to set
 * @index: value of a bit to 1 at a given index
 *
 * Return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setbit;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
setbit = 1 << index;
*n = *n | setbit;
return (1);
}

