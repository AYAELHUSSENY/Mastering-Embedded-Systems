/*
 * main.c

 *
 *  Created on: Aug 15, 2022
 *      Author: Aya Elhusseny
 */
#include "stdio.h"
void main()
{
	char InputCharacter;
	printf("Enter a character:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&InputCharacter);

	printf("ASCII value of %c = %d",InputCharacter,InputCharacter);


}


