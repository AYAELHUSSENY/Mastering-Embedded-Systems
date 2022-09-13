#include"stdio.h"
float sqr(int number){
    float temp, sqrt;
    sqrt = number / 2;
    temp = 0;
     while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
    return sqrt;
}

void main()
{
	int num ;
	printf("Enter a number:");
	scanf("%d",&num);
    float result = sqr(num);
    printf("%.3f",result);
}
