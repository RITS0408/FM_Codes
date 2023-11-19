#include<stdio.h>
int main()
{
    int j,i; //Variable declaration//
    printf("The required pattern is: \n"); //printing for user knowledge//
    for (i=0;i<5;i++) //loop for handling rows//
    {
        for (j=0;j<=i;j++) //loop for handling columns and column elements//
        {
            printf("*"); //printing the pattern//
        }
        printf("\n"); // going to the next row//
    }
    return 0;

}
