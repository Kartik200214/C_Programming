//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 5     iCol = 5
// Output : 1   2   3   4   5
//          1   2           5
//          1       3       5
//          1           4   5
//          1   3   3   4   5
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++) // For Rows
    {
        for (j = 1; j <= iCol; j++) // For Columns
        {
            if (i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if (j == 1 || j == iCol)
            {
                printf("%d\t", j);
            }
            else if (i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
            }
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

    printf("Enter numbers of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); 

    return 0;
}

// Time Complexity : O(n^2)
// Where, n = Number of rows & columns