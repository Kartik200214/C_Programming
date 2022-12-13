// Steps to follow while programming

// Step 1  Understanding the problem statement
// Step 2  write the algorithm
// Step 3  Decide the programming language
// Step 4  Write the program
// Step 5  Test the program


///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept number from user and check whether it is divisible by 5 or not //

// Input : 23
// Output : 23 is not divisible by 5

// Input : 25
// Output : 25 is not divisible by 5

// Input : -20
// Output : -20 is not divisible by 5

/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////
// Algorithm
//////////////////////////////////////////////////

/* 
    START
        Accept number from user as NO 
        Divide that NO by 5 and check the value of reminder
        If the  value is 0
            Then display as No is divisible by 5
        Otherwise
            Display as NO is not divisible by 5
    END
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
// Function Name :  DivisibleByFive
// Description  :   To check whether input is divisible by 5 or not
// Input  :         Integer
// Output :         Integer
// Author :         Kartik Ashok Kolhe
// Date :           12-10-2022
//
////////////////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()  // Entry point of the application
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter  number : \n"); 
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);
    if(iRet == 0)
    {
        printf("%d is not divisble by 5\n",iValue);
    }
    else
    {
        printf("%d is divible by 5\n",iValue);

    }

    return 0;
}