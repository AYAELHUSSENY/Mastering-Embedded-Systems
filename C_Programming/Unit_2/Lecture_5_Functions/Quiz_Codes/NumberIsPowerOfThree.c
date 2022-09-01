#include "stdio.h"
#include <math.h>
void main()
{
	int number;	
	double result;
	printf("Enter a number:\t");
	scanf("%d",&number);
	result = log(number)/log(3);
	if((result == trunc(result)))
	{
		printf("the number is not a power of 3");
		
	}
	else
	{
		printf("the number is  a power of 3");

	}
}