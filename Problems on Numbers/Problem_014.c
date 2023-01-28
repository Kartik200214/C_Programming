//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement :  Write a program which accept number from user and count frequncy of such
//                      a digits which are less than 6.
//
// Input :  2395      Output : 3
// Input : -96672     Output : 1
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;   
    int iCnt = 0;

    if (iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)      
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;   
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);           // Accept input 

    iRet = Count(iValue);          // Function call

    printf("The count of digits which are < 6 is : %d", iRet);

    return 0;  
}

// Time Complexity O(n)
// Where, n = No. of digits

