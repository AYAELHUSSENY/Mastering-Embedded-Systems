#include "stdio.h"
int Last_occurance(int arr[],int s , int n);
void main()
{
	int arr[100],size,num;
	printf("Enter size of the array:\t");
	scanf("%d",&size);
	for(int i = 0; i < size ; i++)
	{
	printf("enter element of arr[%d]:\t",i);
		scanf("%d",&arr[i]);
	}
	printf("enter a number		:  \t");
	scanf("%d",&num);
	printf("Last occurance of number %d is at index %d",num,Last_occurance(arr,size,num));
	Last_occurance(arr,size,num);
	
}
int Last_occurance(int arr[],int s , int n)
{
	for(int i = s-1; i >=0;i--)
	{
		if(arr[i]==n)
		{
			return i;
		}
	}
}
