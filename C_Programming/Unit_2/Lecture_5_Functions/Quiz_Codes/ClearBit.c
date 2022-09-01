#include "stdio.h"
int Clear_Bit(int number , int bit);
void main()
{
	int num,bit_num;
	printf("Enter a number:  \t");
	scanf("%d",&num);
	printf("Enter bit number:\t");
	scanf("%d",&bit_num);
	printf("Result= 	    	%d",Clear_Bit(num,bit_num));
	
}
int Clear_Bit(int number , int bit)
{
	number = number &= ~(1<<bit);
	return number;
}
