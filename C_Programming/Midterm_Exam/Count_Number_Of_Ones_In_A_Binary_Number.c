#include <stdio.h>

void Count_Ones(int N)
{
    // Initialise count variables
    int count1 = 0;
 
    // Iterate through all the bits
    while (N > 0) {
 
        // If current bit is 1
        if (N & 1) {
            count1++;
        }
		
		N = N >> 1;
    }
 
    // Print the count
    
    printf("Count of ones is :%d\n", count1);
}
 

int main()
{
    
    int Number;
	printf("Enter your number:");
	scanf("%d",&Number);
 
    // Function Call
    Count_Ones(Number);
    return 0;
}