#include "stdio.h"
struct S_Student
{
	char S_name[20];
	int  S_roll;
	float S_marks;
};
void main()
{
	struct S_Student Student ;
	printf("Enter information of students:\n");
	printf("Enter name:");
	scanf("%s",&Student.S_name);
	printf("Enter roll number:");
	scanf("%d",&Student.S_roll);
	printf("Enter marks :");
	scanf("%f",&Student.S_marks);
	printf("Displaying Information:\n");
	printf("name: %s\n", Student.S_name);
	printf("Roll:%d\n",Student.S_roll);
	printf("Marks: %.2f\n",Student.S_marks);
	
}
