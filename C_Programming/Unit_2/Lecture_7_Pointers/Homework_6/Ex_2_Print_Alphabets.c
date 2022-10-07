#include "stdio.h"

void main()
{
	char alphabets[27];
	char *ptr_to_alphabet = alphabets;
	char *Moving_Ptr = alphabets;
	char start = 'A';
	
	// fill the array with characters using pointer.
	for(int i = 0 ; i < 26 ; i++)
	{
		*Moving_Ptr = (start + i);
		Moving_Ptr++;
	}
	// display the putput using pointers
	printf("The alphabets are: \n");
	printf("Expected output:\n");
	for(int i = 0 ; i < 26 ; i++)
	{
		printf("%c \t",*ptr_to_alphabet);
		ptr_to_alphabet++;
	}
}