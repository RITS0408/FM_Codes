#include<stdio.h>
int main()
{
    char str[100]; //variable declaration//
    int i,vcount=0; //variable declaration//
    printf("Enter a string: "); //user instruction//
    scanf("%s",str); // taking string from user//
    for (i=0;str[i]!='\0';i++) //loop for surfing through string//
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') //condition for vowel count//
            vcount++; //vowel counter//
    }
    printf("Number of vowels in the string is: %d",vcount); //user information//
    return 0;
}
