#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("%d \n", x);

	/* your code goes there */
	
	if (x > 0)
	{
	printf("is positive");
	}
	else if (x < 0)
	{
	printif("is negative");
	}
	else
	{
	printf("is zero");
	}	
	return (0);
}
