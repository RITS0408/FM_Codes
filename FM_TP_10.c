#include<stdio.h>
int main()
{
    int n; //Variable declaration//
    printf("Enter the a number for calculating factorial: "); //user instruction//
    scanf("%d",&n); //taking user input//
    printf("The factorial of %d is: %d",n,fact(n)); //user information, also function fact is called//
    return 0;
}
int fact(int n) //function definition//
{
    if (n==0) //base case//
        return 1;
    return (n*fact(n-1)); //recursive call for this condition//
}
