
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
#include<stdbool.h>

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

bool DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()  // Entry point of the application
{
    int iValue = 0;
    bool bRet;

    printf("Enter  number : \n"); 
    scanf("%d",&iValue);

    bRet = DivisibleByFive(iValue);
    if(bRet == false)
    {
        printf("%d is not divisble by 5\n",iValue);
    }
    else
    {
        printf("%d is divible by 5\n",iValue);

    }

    return 0;
}