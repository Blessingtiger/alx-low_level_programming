#include "main.h"

/**
 * set_bit - value of a bit to 1 at a given index
 * @n: number to set
 * @index: value of a bit to 1 at a given index
 *
 * return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
bit = 1 << index;
*n = *n | bit;
return (1);
}

