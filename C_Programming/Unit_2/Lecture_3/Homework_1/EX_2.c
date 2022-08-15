/*
 * main.c

 *
 *  Created on: Aug 15, 2022
 *      Author: Aya Elhusseny
 */
#include "stdio.h"
void main()
{
	int UserInput;
	printf("Enter a integer:");
	//The following two statements is to handle the issue in eclipse buffer.
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &UserInput);
	printf("You entered: %d",UserInput);

}


