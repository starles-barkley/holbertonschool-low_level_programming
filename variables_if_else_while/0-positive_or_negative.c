#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand()  - RAND_MAX / 2;
	
	printf("%d \n", n);
       
	/* Our own code will go here */
	if (n > 0)
	{
		printf ("%n is positive \n");
	}
	else if (n < 0)
	{
		printf("%n is negative \n");
	}
	else 
	{
		printf("%n is zero \n");
	}
	return (0);
}
