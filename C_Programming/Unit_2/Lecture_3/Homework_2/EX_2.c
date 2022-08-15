/*
 * main.c

 *
 *  Created on: Aug 15, 2022
 *      Author: Aya Elhusseny
 */
# include<stdio.h>
int main(){
char letter;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&letter);
	fflush(stdin);
if(letter=='a'||letter=='i'||letter=='e'||letter=='u'||letter=='o' )
{
	printf("Letter %c is Vowel",letter);

}
else
{
	printf("Letter %c is consonant",letter);
}



	return 0;
}
