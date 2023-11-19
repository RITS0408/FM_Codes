#include<stdio.h>
#include<string.h>
int main()
{
    int i,wcount=0; // variable declaration//
    char str[1000]; // variable declaration//
    printf("Enter the text: "); //user instruction//
    gets(str); //getting text input from user//
    for(i=0;str[i]!='\0';i++) //loop for handling text elements//
    {
        if (str[i]==' '&&str[i+1]!=' ') //condition for word count//
            wcount++; //word counter//
    }
    printf("Number of words = %d",wcount+1); //printing word count/user information//
    return 0;
}
