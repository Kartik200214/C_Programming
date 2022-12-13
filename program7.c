#include<stdio.h>
/*
-> Steps to follow while programming

Step 1  Understanding the problem statement
Step 2  write the algorithm
Step 3  Decide the programming language
Step 4  Write the program
Step 5  Test the program
*/

int Multiplication(int ivalue1 ,int ivalue2)
{
    int iAns = 0;
    iAns = ivalue1 * ivalue2;
    return iAns;
}



int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iNo1);

    printf("Enter the second number : \n");
    scanf("%d",&iNo2);
    iMult = Multiplication(iNo1,iNo2);


    printf("Multiplication is : %d\n",iMult);

    return 0;
}