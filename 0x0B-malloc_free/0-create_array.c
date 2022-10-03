#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
char *pstr;
unsigned int i;

pstr = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
pstr[i] = c;
pstr[i] = 0;
return (size < 1 ? 0 : pstr);
}
