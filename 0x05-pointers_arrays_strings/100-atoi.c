#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 * Return: integer
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
