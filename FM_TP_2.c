#include<stdio.h>
int main()
{
    int a; // variable declaration //
    char b[100],c; // variable declaration //
    double d; // variable declaration //
    printf("Enter a string: \n"); // instruction for user//
    scanf("%s",b); //Taking string from user//
    printf("String entered is: %s\n",b);//printing string//
    printf("Enter an integer: \n"); // instruction for user//
    scanf("%d",&a); //Taking integer from user//
    printf("Integer entered is: %d\n",a); //printing integer//
    printf("Enter a character: \n"); // instruction for user//
    scanf("%c",&c); //Taking character from user//
    printf("Character entered is: %c\n",c); //printing character//
    printf("Enter a double: \n"); // instruction for user//
    scanf("%lf",&d); //Taking double from user//
    printf("Double entered is: %lf\n",d);//printing double//
    return 0;
}
