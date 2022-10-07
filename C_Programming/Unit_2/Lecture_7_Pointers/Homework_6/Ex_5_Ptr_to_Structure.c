#include <stdio.h>
struct employee
{
char *empname;
int empid;
};

int main()
{
 	printf("\n\n Pointer : Show a pointer to an array which contents are pointer to structure :\n"); 
	printf("-----------------------------------------------------------------------------------\n");

	static struct employee emp1={"Aya",1804970},emp2={"Ahmed",1804590},emp3={"Osama",1804975};
	struct employee(*arr[])={&emp1,&emp2,&emp3};
	struct employee(*(*pt)[3])=&arr;

	printf(" Exmployee Name : %s \n",(**(*pt)).empname);

	printf(" Employee ID :  %d\n",(*(*pt))->empid);	

	return 0;
}