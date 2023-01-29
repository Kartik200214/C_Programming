/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and return the count of even digits
//
// Input :  2395     Output : 1
// Input : -1018     Output : 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;     // Local variables
    int iCnt = 0;

    while (iNo != 0)     // Logic
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);       // Function call

    printf("The count of even digits are : %d", iRet);

    return 0;     
}

// Time Complexity O(n)
// Where, n = No. of digits

