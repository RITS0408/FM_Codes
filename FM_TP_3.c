#include<stdio.h>
int main()
{
    int j,i,m; //variable declaration//
    printf("Enter number of rows for the pattern: "); //user instruction//
    scanf("%d",&m); //taking number of rows for pattern//
    printf("The required pattern is: \n"); //user instruction//
    for (i=0;i<m;i++) //loop for handling rows//
    {
        for (j=0;j<=i;j++) //loop for handling columns and elements//
        {
            printf("*"); //printing pattern//
        }
        printf("\n"); //going to next row//
    }
    return 0;

}
