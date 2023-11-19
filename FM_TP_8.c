#include<stdio.h>
int main()
{
    int B[100],i,j,n,temp,elm,hi,lo,mid; //variable declaration//
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
    printf("Sorted array is: ");//user information//
    for(i=0;i<n;i++) //loop for handling array elements//
        printf("%d, ",B[i]); //printing array//
    printf("Enter element to be found: "); //user instruction//
    scanf("%d",&elm); //scanning search element from user//
    lo=0; //initialization for lower limit//
    hi=n-1; //initialization for upper limit//
    do //loop for binary search//
    {
        mid=(hi+lo)/2; //initialization for mid//
        if (elm>B[mid]) //comparison with mid element//
        {
            lo=mid+1;
        }
        if (elm<B[mid]) //comparison with mid element//
        {
            hi=mid-1;
        }
    }while(elm!=B[mid] && lo<=hi); //condition for loop//
    if (elm==B[mid]) //condition for element found//
        printf("Element found at position = %d",mid+1); //user information//
    else {printf("Element not found");} //user information//
    return 0;
}
