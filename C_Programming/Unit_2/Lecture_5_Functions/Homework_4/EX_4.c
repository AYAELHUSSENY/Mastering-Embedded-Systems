#include"stdio.h"
int PowerOfNumber(int base , int power);
void main()
{
    int base,power;
    printf("Enter base number:");
    scanf("%d",&base);
    printf("Enter power number(positive integer):");
    scanf("%d",&power);
    printf("%d^%d = %d",base,power,PowerOfNumber(base,power));
}
int PowerOfNumber(int base , int power){
int result;
if(power != 0)
{
    return(base*PowerOfNumber(base,power-1));
}
else{
    return 1;
}

}
