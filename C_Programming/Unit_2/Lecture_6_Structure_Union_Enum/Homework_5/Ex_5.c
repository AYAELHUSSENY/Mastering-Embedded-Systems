#include "stdio.h"
#define Pi 3.1415
#define Area(r)(Pi * r * r)
void main()
{
		int radius;
		float area;
		printf("Enter the radius:");
		scanf("%d",&radius);
		area = Area(radius);
		printf("Area = %.2f",area);
}