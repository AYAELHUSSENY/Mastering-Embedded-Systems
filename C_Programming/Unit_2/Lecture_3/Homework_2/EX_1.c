/*
 * main.c

 *
 *  Created on: Aug 15, 2022
 *      Author: Aya Elhusseny
 */
#include<stdio.h>
 int main()
{
	int InputNumber;
	printf("Enter an integer you want to check:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&InputNumber);
	if(InputNumber%2 == 0)
	{
		printf("%d is even",InputNumber);

	}
	else
	{
		printf("%d is odd",InputNumber);

	}

}



