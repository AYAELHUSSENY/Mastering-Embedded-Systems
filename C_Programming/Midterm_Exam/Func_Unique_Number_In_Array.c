#include "stdio.h"
char UniqueNumber(int arr[],int size)
{
	int res = 0;
	for(int i = 0 ; i < size ; i++)
	{
		res^=arr[i];
		
	}
	return res;
}

int main()
{
	int arr[100],size;
	printf("Enter Array Size:");
	scanf("%d",&size);
	for(int i = 0 ; i <size ; i++)
	{
		printf("Enter Element of Arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("Unique Number in the array is: %d",UniqueNumber(arr,size));
	return 0;
	
}