#include<stdio.h>
int main()
{
    int B[100],i,j,n,temp; //variable declaration//
    printf("Enter number of integers in the array: "); //user instruction//
    scanf("%d",&n); //number of integers in array user input//
    printf("Enter the integers:"); //user instruction//
    for(i=0;i<n;i++) //loop for handling array elements//
        scanf("%d",&B[i]); //scanning array elements//
    printf("Array entered is: "); //user information//
    for(i=0;i<n;i++) //loop for handling array elements//
        printf("%d, ",B[i]); //printing array//
        printf("\n"); //jumping to next line//
    for(i=0;i<n-1;i++) // loop for handling iterations//
    {
        for(j=0;j<n-i-1;j++) //loop for handling array elements//
        {
            if(B[j]>B[j+1]) //comparison condition for sorting//
            {
                temp=B[j]; //value swap for sort//
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
    printf("Sorted array is: "); //user information//
    for(i=0;i<n;i++) //loop for handling array elements//
        printf("%d, ",B[i]); //printing array//
    return 0;
}
