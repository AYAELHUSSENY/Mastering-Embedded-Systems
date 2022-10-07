#include "stdio.h"
void main()
{
	char InputString[25];
	char *Start_Ptr = InputString;
	int length = 0;
	
	printf("Input a string:");
	scanf("%s",InputString);
	printf("Reverse of the string is : ");
	
		while(*Start_Ptr)
		{
			Start_Ptr++;
			length++;
		}
		
			// in this case the pointer points to the last occupied location in the array:
			
		for (int i = length; i >= 0; --i) 
		{
					printf("%c", *(Start_Ptr));
					--Start_Ptr;
		}
		
		

	}