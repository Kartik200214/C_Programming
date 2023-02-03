//////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern.
//
// Input  : iRow = 4   iCol = 3
// Output : 1   2   3
//          1   2   3
//          1   2   3
//          1   2   3
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{

    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("\nEnter number of rows : ");
    scanf("%d", &iValue1);

    printf("\nEnter number of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); 

    return 0;
}

// Time Complexity : O(n^2)
// Where, n = Number of rows & columns