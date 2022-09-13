#include "stdio.h"
void ReverseArray(int a[],int s);

void main()
{
	int arr[100];
	int size;
	
	printf("Please Enter Size of the array:\t");
	scanf("%d",&size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("Enter elemnet of array[%d]:\t",i);
		scanf("%d",&arr[i]);
	}
	//reverse the array:
	ReverseArray(arr,size);

	
	
	
}
void ReverseArray(int a[],int s)
{
	for( int i = 0 , j = s-1; i < (s/2);i++,j--)
	{
		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	printf("Array after Reversing:\n");
	for(int i = 0 ; i < s ;i++)
	{
			printf("%d\n",a[i]);
	}
	
}
