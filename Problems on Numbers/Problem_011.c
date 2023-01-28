//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and check whether it is contain 0 or not.
//
// Input : 2395
// Output : There is no zero
//
// Input : 230
// Output : There is zero
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

// Function Declaration
BOOL CheckZero(int);

int main()
{
    int iValue = 0; 
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d", &iValue); // Accept input

    bRet = CheckZero(iValue); // Function call

    if (bRet == TRUE)
    {
        printf("There is zero");
    }

    else
    {
        printf("There is no zero ");
    }

    return 0; 
}

// Function Defination
BOOL CheckZero(int iNo)
{
    int iDigit = 0;     
    BOOL bAns = FALSE;

    while (iNo != 0)     
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            bAns = TRUE;
            break;
        }

        iNo = iNo / 10;
    }

    return bAns;
}

// Time Complexity O(n)
// Where, n = No. of digits
