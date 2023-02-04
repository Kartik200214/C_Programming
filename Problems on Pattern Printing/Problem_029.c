//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 6     iCol = 6
// Output : *   *   *   *   *   *
//          *   #   #   #   *   *
//          *   #   #   *   $   *
//          *   #   *   $   $   *
//          *   *   $   $   $   *
//          *   *   *   *   *   *
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

            if ((i == 1 || i == iRow))
            {
                printf("*\t");
            }
            else if ((j == 1 || j == iCol))
            {
                printf("*\t");
            }

            else if (((i + j) <= iCol) && ((i + j) > 2))
            {
                printf("#\t");
            }
            else if (((i + j) > (iCol + 1)) && ((i + j) < (iCol * 2)))
            {
                printf("$\t");
            }

            else
            {
                printf("*\t");
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
