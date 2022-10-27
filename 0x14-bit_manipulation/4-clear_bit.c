#include "main.h"

 /**
  * clear_bit - Sets the value of a bit at a given index to 0.
  * @n: input
  * @index: index
  * Return: 0
  * Description: 'project solution'
  * Return: If an error occurs - -1.
  * Otherwise - 1.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = *n & ~(1ul << index);
return (1);
}
