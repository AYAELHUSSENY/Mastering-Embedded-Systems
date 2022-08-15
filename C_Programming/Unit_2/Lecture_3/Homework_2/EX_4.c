# include<stdio.h>
# include<stdlib.h>
int main(){
	float num;
	printf("Enter a number:");
	fflush(stdout); 
	scanf("%f",&num);
	fflush(stdin);
	if(num>0){
		printf("Number %.2f is Positive",num);
	}
	else if(num<0){
		printf("Number %.2f is Negative", num);
	}
	else{
		printf("You entered Zero");
	}



	return 0;
}
