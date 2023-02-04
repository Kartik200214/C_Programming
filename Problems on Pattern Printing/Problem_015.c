//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 3     iCol = 4
// Output : 1   2   3   4
//          5   6   7   8
//          9   10  11  12
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{

    int i = 0, j = 0, iCnt = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t", iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); 

    return 0;
}


// Time Complexity : O(n^2)
// Where, n = Number of rows & columns
