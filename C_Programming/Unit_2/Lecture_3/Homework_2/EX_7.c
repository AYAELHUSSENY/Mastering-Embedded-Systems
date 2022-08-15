# include<stdio.h>
# include<stdlib.h>
int main(){
	int InputNumber;
	int factorial = 1;
	printf("Enter an integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&InputNumber);
	if (InputNumber < 0)
	{
	    printf("Error! Factorial of negative number doesn't exist.");
	    
	}
	else{
	    for(int i = 1; i <= InputNumber;i++)
	    {
	        factorial *=i;
	    }
	    printf("Factorial = %d",factorial);
	}


	return 0;
}
