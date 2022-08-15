# include<stdio.h>
# include<stdlib.h>
int main(){
	char InputCharacter;
	printf("enter a character:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&InputCharacter);
	if(InputCharacter >= 'a' && InputCharacter <='z' ||InputCharacter >= 'A' && InputCharacter <='Z' )
	{
	    printf("%c is an alphabet.",InputCharacter);
	}
	else
	{
	    printf("%c is not an alphabet.",InputCharacter);

	}



	return 0;
}
