#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iNo1);

    printf("Enter the second number : \n");
    scanf("%d",&iNo2);
    

    iMult = iNo1 * iNo2;

    printf("\nMultiplication is : %d\n",iMult);

    return 0;
}