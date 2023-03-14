
#include<stdio.h>

int strlenX(char str[]) //<<<<<<<
{
    int iCnt = 0,i = 0;
    while (str[i] != '\0')
    {
        iCnt++;
        i++;
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

    iRet = strlenX(Arr); // strlenX(100)

    printf("Number of character are %d\n",iRet);


    return 0;
}