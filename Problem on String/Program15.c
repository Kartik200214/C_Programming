// Accept the string and accept charcter from user and count occarances of  letter. 
#include<stdio.h>

int CountFrequency(char *str,char ch) //<<<<<<< 
{
    int iCnt = 0;

    while(*str != '\0')
    {

        if(*str == ch) // for Capital letter also
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

    iRet = CountFrequency(Arr,'a'); // strlenX(100)

    printf("Frequency of letter : %d\n",iRet);


    return 0;
}