/////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern.
//
// Input : 5    Output : A  B   C   D   E
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0; // Local variables
    char Alpha = 'A';

    // Filter
    if (iNo > 26)
    {
        printf("\nThere are only 26 alphabets : \n");
        iNo = 26;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", Alpha++);
    }
}

int main()
{
    int iValue = 0;

    printf("\nEnter a number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}


// Time Complexity : O(n)
// Where, n = input number
