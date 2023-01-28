//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept one number from user and print all non factors of that number.
//                     
// Test case :
// Input : 12
// Output : 5   7   8   9   10  11
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// Function Defination
void NonFactor(int iNo)
{
    int iCnt = 0;

    if (iNo == 0)       // Filter
    {
        printf("You enter no. 0 ");
        return;
    }

    if (iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo ; iCnt++)    // Logic
    {
        if ((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    NonFactor(iValue);

    return 0;
}
// Time complexity : O(n)
// Where n = iNo (input number)
