#include <stdio.h>
void Sum_Digits(int n );
int main()
{
	int n;
    printf("Enter an integer\n");
	scanf("%d", &n);
	Sum_Digits(n);
   

   return 0;
}
void Sum_Digits(int n )
{
	int  t, sum = 0, remainder;

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   
}
