/*Task 0 - By Sole*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/*
 * Main - start of execution
 */
void tim(char *s);

int main(void)
{
	int n;
	char s[];
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	trim(s);

	if	(n > 0)
		printf("%d is positive\n", n);
	else if	(n < 0)
		printf("%d is negative\n", n); 
	else
		printf("%d is zero\n", n); 
	return (0);
}
void trim(char *s)
{
	int i = strlen(s) -1;

	while (i > 0)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t) i--;
		else break;
	}

	s[i + 1] = '\0';

}
