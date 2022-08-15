/*
 * main.c

 *
 *  Created on: Aug 15, 2022
 *      Author: Aya Elhusseny
 */
#include "stdio.h"
void main()
{
	float InputNumber1,InputNumber2;
	printf("Enter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&InputNumber1);
	scanf("%f",&InputNumber2);
	printf("Product: %f", (InputNumber1*InputNumber2));


}


