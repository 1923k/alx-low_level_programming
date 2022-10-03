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
char *arr;
unsigned int i;

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
