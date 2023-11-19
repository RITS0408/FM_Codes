#include<stdio.h>
int main()
{
    int B[100],i,j,n,temp,C[100],large,pos; //variable declaration//
    printf("Enter number of integers in the array: "); //user instruction//
    scanf("%d",&n); //number of integers in array user input//
    printf("Enter the integers:"); //user instruction//
    for(i=0;i<n;i++) //loop for handling array elements//
        scanf("%d",&B[i]); //scanning array elements//
    printf("Array entered is: "); //user information//
    for(i=0;i<n;i++) //loop for handling array elements//
    {
        printf("%d, ",B[i]);  //printing array//
        C[i]=B[i]; // copying B array to C array//
    }
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
    printf("Sorted array in ascending order (Bubble sort) is: "); //user information//
    for(i=0;i<n;i++) //loop for handling array elements//
        printf("%d, ",B[i]); //printing array//
    printf("\n"); //going to next line//
    for(i=0;i<n-1;i++) // loop for handling iterations//
    {
        large=C[i]; //initializing large//
        pos=i; //position for large initialized//
        for(j=i+1;j<n;j++) //loop for handling array elements//
        {
            if (large<C[j])  //comparison condition for sorting//
            {
                large=C[j]; //switching large value as per condition//
                pos=j; //position of current large element//
            }
        }
        C[pos]=C[i]; //swapping element for sorting//
        C[i]=large; //swapping element for sorting//
    }
    printf("Sorted array in descending order (Selection sort) is: "); //user information//
    for(i=0;i<n;i++) //loop for handling array elements//
        printf("%d, ",C[i]); //printing array//
    return 0;
}
