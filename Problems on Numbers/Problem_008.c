////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept one number from user and return summation of all its non factor.
//                     
// Test case :
// Input  : 12
// Output : 50
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// Function Defination
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int FactSum = 0;

    if (iNo == 0)   // Filter
    {
        printf("You enter no. ");
        return 0;
    }

    if (iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo ; iCnt++)    // Logic
    {
        if ((iNo % iCnt) != 0)
        {
            FactSum = FactSum + iCnt;
        }
    }

    return FactSum;
}

//Entry point function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}
// Time complexity : O(n)
// Where n = iNo (input number)
