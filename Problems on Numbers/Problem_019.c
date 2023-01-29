///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and return difference
//                     between summation of even digits and summation of odd digits.
//
// Test Case :
// Input : 2395     Output : -15 (2-17)
// Input : 8440     Output :  16  (8-2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////                      

#include<stdio.h>

// Functon declaration
int CountDiff(int);

int main()
{
    int iValue = 0;         // Local variables
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);           // Accept input

    iRet = CountDiff(iValue);       // Function call

    printf("%d", iRet);

    return 0;        
}


// Function defination
int CountDiff(int iNo)
{
    // Logic 
    
    int iDigit = 0;   
    int iEven = 0;
    int iOdd = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return iEven - iOdd;
}

// Time Complexity O(n)
// Where, n = No. of digits

