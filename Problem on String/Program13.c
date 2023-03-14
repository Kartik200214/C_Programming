// Accept the input from user and occarances of small  letter .

#include<stdio.h>

int CountSmall(char *str) //<<<<<<<
{
    int iCnt = 0;

    while(*str != '\0')
    {

        if((*str >='a') && (*str <= 'z')) // for small letter also
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}

int main()
{
    char Arr[10]; // static memory allocation
    int iRet = 0;
    
    printf("Please enter string\n");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr); // strlenX(100)

    printf("Frequency of small letter are %d\n",iRet);


    return 0;
}