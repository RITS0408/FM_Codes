#include<stdio.h>
int main()
{
    int i,j,B[100][100],sum=0,trace=0,secdiag=0; //variable declaration//
    printf("Enter elements for a 4X4 matrix: "); //user instruction//
    for(i=0;i<4;i++) //loop for handling rows//
    {
        for(j=0;j<4;j++) //loop for handling columns and elements//
    {
        {
            scanf("%d",&B[i][j]); //taking elements input for matrix from user//
        }
    }
    printf("The matrix is:\n"); //user information//
    for(i=0;i<4;i++) //loop for handling rows//
    {
        for(j=0;j<4;j++) //loop for handling columns and elements//
        {
            printf("%d ",B[i][j]);//printing element of rows//
            sum=sum+B[i][j]; //sum calculation//
            if (i==j) //condition for primary diagonal//
                trace=trace+B[i][j]; //computation of trace//
            if (i+j==3) //condition for secondary diagonal//
                secdiag=secdiag+B[i][j]; //computation of sum of secondary diagonal//
        }
        printf("\n"); //going to next line//
    }
    printf("Sum of all elements of matrix is: %d\n",sum); //user information//
    printf("Trace of matrix is: %d\n",trace); //user information//
    printf("Sum of elements of secondary diagonal is: %d",secdiag); //user information//
    return 0;




}
