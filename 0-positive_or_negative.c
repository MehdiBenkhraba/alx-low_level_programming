#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main : assign a random number to the variable n each time it is executed and tell if is negative , positive or zero 
* return : 0 always
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	    printf("%d is positive /n",n);
	}    
	else if (n < 0)
	{
	    printf("%d is negative /n",n);
	}    
	else if (n = 0)
	{
	    printf("%d is zero /n",n);
	}    
	return (0);
}
