#include "stdio.h"
void main()
{
    float FirstMatrix[2][2];
    float SecondMatrix[2][2];
    float ResultMatrix[2][2];

    //Getting first Matrix Values from user
    printf("Enter the elements of 1st matrix \n");
    for(int i = 0 ; i < 2;i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("Enter a%d%d:\t",i+1,j+1);
            scanf("%f",&FirstMatrix[i][j]);

        }

    }

    //Getting second Matrix Values from user
    printf("Enter the elements of 2nd matrix \n");
    for(int i = 0 ; i < 2;i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("Enter a%d%d:\t",i+1,j+1);
            scanf("%f",&SecondMatrix[i][j]);

        }

    }

    //Calculating the sum of the two matrix
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {

            ResultMatrix[i][j]= FirstMatrix[i][j] + SecondMatrix[i][j];
        }
    }

    //Printing sum of Matrix
    printf("sum of Matrix:\n");
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("%.1f \t",ResultMatrix[i][j]);
        }
        printf("\n");

    }


}

