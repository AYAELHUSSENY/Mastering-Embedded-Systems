/*
 * main.c

 *
 *  Created on: Aug 15, 2022
 *      Author: Aya Elhusseny
 */
# include<stdio.h>
int main(){
float FirstNumber,SecondNumber,ThirdNumber;
printf("Enter three numbers:");
fflush(stdin);
fflush(stdout);
scanf("%f %f %f",&FirstNumber,&SecondNumber,&ThirdNumber);



if(FirstNumber>SecondNumber && FirstNumber >  ThirdNumber)
{
    printf("Largest Number = %.3f",FirstNumber);
}
else if (SecondNumber > FirstNumber && SecondNumber > ThirdNumber)
{
    printf("Largest Number = %.3f",SecondNumber);

}
else {
    printf("Largest Number = %.3f",ThirdNumber);

}



	return 0;
}
