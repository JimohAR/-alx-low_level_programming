#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main function - checks if a value is greater,
*less or equal to zero
*/
int main(void)
{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
