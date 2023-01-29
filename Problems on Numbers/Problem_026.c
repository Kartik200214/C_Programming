////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept range from user and display all even numbers
//                     in between that range.
//
// Test cases:
// Input : 23   35      Output : 24 26 28 30 32 34
// Input : -10   2      Output : -10 -8 -6 -4 -2 0 2
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// Function declaration
void RangeDisplayEven(int, int);
  
int main()
{
    int iValue1 = 0; // Local variables
    int iValue2 = 0;

    printf("\nEnter starting number : ");
    scanf("%d", &iValue1);

    printf("\nEnter Ending Number:  ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2); // Function call

    return 0; 
}

// Function defination
void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt = 0;

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
// Time Complexity O(n)
// Where, n = numbers in Range
