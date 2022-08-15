# include<stdio.h>
# include<stdlib.h>
int main(){
	int InputNumber;
	printf("Enter an integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&InputNumber);
	int sum = 0;
	for(int i = 0 ; i <= InputNumber;i++)
	{
	    sum+=i;
	}
	printf("Sum = %d",sum);
	



	return 0;
}
