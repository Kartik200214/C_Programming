// Accept full name from user and display on the screen
#include<stdio.h>


int main()
{
    char Arr[50];

    char cValue = '\0';
    
    printf("Please enter your Full Name\n");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr); //special scanf function

    printf("Your name is : %s\n",Arr);

    return 0;
}