#include "stdio.h"
struct Student
{
	char name[20];
	int roll;
	float marks;
};
void main()
{
		struct Student S[10];
		int i ;
		
		printf("Please Enter information of Students:\n");
		for( i = 0 ; i < 10 ; ++i)
		{
			S[i].roll = i+1;
			printf("For roll number %d\n",S[i].roll);
			printf("Enter name:");
			scanf("%s",S[i].name);
			printf("Enter marks:");
			scanf("%f",&S[i].marks);
			printf("\n");
		}
		printf("Displaying information of students:\n");
		for(int i = 0 ; i < 10 ; i++)
		{
			printf("Information for roll number %d:\n",S[i].roll);
			printf("Name: %s\n",S[i].name);
			printf("Marks: %.1f\n",S[i].marks);
		}
}