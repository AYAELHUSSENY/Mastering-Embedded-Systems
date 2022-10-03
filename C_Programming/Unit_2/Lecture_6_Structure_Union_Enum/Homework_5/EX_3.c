#include "stdio.h"
struct SComlexNum
{
	float SRealNum;
	float SImgNum;
};
struct SComlexNum Add_Two_Complex_Numbers(struct SComlexNum NUM1, struct SComlexNum NUM2); 
void main()
{
	struct SComlexNum Num1,Num2,Result;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively:");
	scanf("%f %f",&Num1.SRealNum,&Num1.SImgNum);
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively:");
	scanf("%f %f",&Num2.SRealNum,&Num2.SImgNum);
	Result = Add_Two_Complex_Numbers(Num1,Num2);
	printf("Sum = %.1f + %.1fi",Result.SRealNum,Result.SImgNum);
	
	
	
}
struct SComlexNum Add_Two_Complex_Numbers(struct SComlexNum NUM1, struct SComlexNum NUM2){
	struct 	SComlexNum SResult;
	SResult.SRealNum = NUM1.SRealNum +NUM2.SRealNum;
	SResult.SImgNum = NUM1.SImgNum+NUM2.SImgNum;
	return SResult;
}
