#include<stdio.h>
int main()
{
    int *p1,*p2,m,n,temp; //variable declaration//
    p1=&m; //assigning value to pointer//
    p2=&n; //assigning value to pointer//
    printf("Enter values for m and n: "); //user instruction//
    scanf("%d%d",&m,&n); //taking values from user//
    printf("Value of m and n is equal to: %d and %d\n",m,n); //user information//
    temp=*p1; //value swap through pointers//
    *p1=*p2;
    *p2=temp;
    printf("Value of m and n is equal to: %d and %d after swapping.",m,n); //user information//
    return 0;

}
