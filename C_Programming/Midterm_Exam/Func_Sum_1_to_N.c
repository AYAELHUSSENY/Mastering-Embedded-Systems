#include "stdio.h"
int SUM(int num)
{
	int sum = (num*(num+1))/2 ;
	return sum;
}
int SumRange(int Start_Range,int End_Range )
{
	int sum = SUM(End_Range) - SUM(Start_Range-1);
	return sum;
}
int main()
{
	int Start_Range,End_Range;
	printf("Enter the number you want to start the sum with:");
	scanf("%d",&Start_Range);
	printf("Enter the number you want to End the sum with:");
	scanf("%d",&End_Range);
	printf("Sum = %d",SumRange(Start_Range,End_Range));


	return 0 ;
}