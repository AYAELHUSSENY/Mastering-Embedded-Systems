# include<stdio.h>
int main(){
	float InputNumber1,InputNumber2,Result;
	char OperationCharacter;
	printf("Enter operator either + or - or * or /:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&OperationCharacter);
	printf("Enter two operands:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&InputNumber1);
	scanf("%f",&InputNumber2);
    	switch(OperationCharacter)
    	{
    	    case '+':
    	    Result = InputNumber1 + InputNumber2;
    	    break;
    	    case '-':
    	    Result = InputNumber1 - InputNumber2;
    	    break;
    	    case '*':
    	    Result = InputNumber1 * InputNumber2;
    	    break;
    	    case '/':
    	    Result = InputNumber1 / InputNumber2;
    	    break;
    	    default:
    	    printf("You entered wrong operator!");
    	}
    printf("%.1f %c %.1f = %.1f",InputNumber1,OperationCharacter,InputNumber2,Result);
	return 0;
}
