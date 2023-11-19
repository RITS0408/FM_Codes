#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]; //variable declaration//
    int i,flag=0,n; //variable declaration//
    printf("Enter a string: "); //user instruction//
    scanf("%s",str); //taking string input from user//
    printf("String entered is: %s\n",str); //user information//
    n=strlen(str); //string length calculation//
    for(i=0;i<n;i++) //loop for surfing through string//
    {
        if (str[i]!=str[n-i-1]) //checking for palindrome//
        {
            flag=1;
            break;
        }
    }
    if (flag==0) //condition for palindrome//
        printf("String entered is palindrome."); //user information//
    else if (flag==1) //condition for not a palindrome//
        printf("String entered is not a palindrome."); //user information//
    return 0;
}
