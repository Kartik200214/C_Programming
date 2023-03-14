// Accept the input from user and occarances of Capital  letter 
#include<stdio.h>

int CountCapital(char *str) //<<<<<<<
{
    int iCnt = 0;

    while(*str != '\0')
    {

        if((*str >='A') && (*str <= 'Z')) // for Capital letter also
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

    iRet = CountCapital(Arr); // strlenX(100)

    printf("Frequency of Capital letter are %d\n",iRet);


    return 0;
}