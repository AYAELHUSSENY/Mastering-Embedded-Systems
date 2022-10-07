#include "stdio.h"
void main()
{
	int m = 29 ;
	int *ptr_m = &m;
	printf("Address of m: %p\n",&m);
	printf("Value of m: %d\n",m);
	printf("Now ab is assigned with the address of m.\n");
	printf("address of pointer ab: %p\n",ptr_m);
	printf("Content of pointer ab: %d\n",*ptr_m);
	m = 34;
	printf("address of pointer ab: %p\n",ptr_m);
	printf("Content of pointer ab: %d\n",*ptr_m);
	
	*ptr_m = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m: %p\n",&m);
	printf("Value of m: %d\n",m);
	
	
}
