#include "stdio.h"
void main()
{
	int FirstArray[100],SecondArray[100];
	int SizeOfFirstArray,SizeOfSecondArray;
	printf("Enter size of first array:\t");
	scanf("%d",&SizeOfFirstArray);
	for(int i = 0 ; i <SizeOfFirstArray;i++)
	{
		printf("Enter elemnet of array[%d]:\t",i);
		scanf("%d",&FirstArray[i]);
	}
	
	printf("Enter size of second array:\t");
	scanf("%d",&SizeOfSecondArray);
	for(int i = 0 ; i <SizeOfSecondArray;i++)
	{
		printf("Enter elemnet of array[%d]:\t",i);
		scanf("%d",&SecondArray[i]);
	}
	
	printf("First Array Before Swapping:\n");
	for(int i = 0 ; i < SizeOfFirstArray ;i++)
	{
		printf("%d \n",FirstArray[i]);
	}
	
	printf("Second Array Before Swapping:\n");
	for(int i = 0 ; i < SizeOfSecondArray ;i++)
	{
		printf("%d \n",SecondArray[i]);
	}
	
	//Swapping :
	int size; 
	int flag = 0;
	if( SizeOfFirstArray > SizeOfSecondArray)
	{
		size = SizeOfFirstArray;
		flag = 1;
	}
	else
	{
		size = SizeOfSecondArray;	
		
	}
	for(int i = 0 ; i < size;i++)
	{
		int temp = FirstArray[i];
		FirstArray[i] = SecondArray[i];
		SecondArray[i]=temp;
	}
	if(flag == 1)
	{
		printf("First Array After Swapping:\n");
		for(int i = 0 ; i < SizeOfSecondArray ;i++)
		{
			printf("%d\n",FirstArray[i]);
		}
		printf("Second Array after Swapping:\n");
		for(int i = 0 ; i < SizeOfFirstArray ;i++)
		{
			printf("%d\n",SecondArray[i]);
		}
		
	}
	else if(flag == 0)
	{
		printf("First Array after Swapping:\n");
		for(int i = 0 ; i < SizeOfSecondArray ;i++)
		{
			printf("%d\n",FirstArray[i]);
		}
		
		printf("Second Array after Swapping:\n");
		for(int i = 0 ; i < SizeOfFirstArray ;i++)
		{
			printf("%d\n",SecondArray[i]);
		}
		
	}
	
	
	
	
}