// Accept the input from user and occarances of letter a 
#include<stdio.h>

int Countch(char *str) //<<<<<<<
{
    int iCnt = 0;

    while(*str != '\0')
    {

        if(*str =='a') // for  small letter only
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}

int main()
{
    char Arr[20]; // static memory allocation
    int iRet = 0;
    
    printf("Please enter string\n");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    iRet = Countch(Arr); 

    printf("Frequency of a is are %d\n",iRet);


    return 0;
}