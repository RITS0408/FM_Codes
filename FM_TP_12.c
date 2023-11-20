#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr; //file pointer variable declaration//
    int wrd=0,characters=0;//variable declaration//
    char ch;//variable declaration//
    char path[100];//variable declaration//
    printf("Enter source file path: "); //User instruction//
    scanf("%s", path); //Getting file path input from user//

    ptr = fopen(path,"r");//opening file in read mode//

    while((ch = fgetc(ptr)) != EOF)//loop for handling file characters//
    {
        characters++; //character counter//
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') //condition for word count//
            wrd++; //word counter//
    }
     if (characters > 0) //last word counting condition//
    {
        wrd++;
    }
    printf("\n"); //going to next line//
    printf("Total characters = %d\n", characters); //user information//
    printf("Total words      = %d\n", wrd); //user information//


    fclose(ptr); //closing the file handling function//
    return 0;
}
