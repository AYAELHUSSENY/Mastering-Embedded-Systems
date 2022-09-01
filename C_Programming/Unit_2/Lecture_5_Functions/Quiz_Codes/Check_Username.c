#include "stdio.h"
#include"string.h"

int main()
{	char Names[100],Username[100];
	printf("Please enter a string:");
	scanf("%s",&Names);
	printf("Please enter your username:");
	scanf("%s",&Username);
	if(stricmp(Names,Username)== 0)
	{
		printf("Two Identical Strings.");
	}
	else
	{
		printf("Two different Strings.");

	}
	

return 0;
}