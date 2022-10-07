#include "stdio.h"
void main()
{
	int arr[20];
	int ArrSize;
	int *Start_ptr = arr;
	int *End_ptr = NULL;
	printf("Input the number of elements to store in the array(max 15) :");
	scanf("%d",&ArrSize);
	printf("Input %d number of elements in the array:\n", ArrSize);
	for(int i = 0 ; i < ArrSize ; i++)
	{
		printf("element - %d :",i+1);
		scanf("%d",&arr[i]);
	}
	End_ptr = arr + ArrSize - 1;
	for(int i = 0 ; i < (ArrSize/2) ; i++)
	{
		//Swap the elements in the array
		int t = *(Start_ptr +i);
		*(Start_ptr+i) = *(End_ptr-i);
		*(End_ptr-i) = t;
	}
	printf("The elements of array in reverse order are :\n");

	for(int i = 0 ; i < ArrSize ; i++)
	{
		printf("element - %d : %d \n",i+1,arr[i]);

	}

}
