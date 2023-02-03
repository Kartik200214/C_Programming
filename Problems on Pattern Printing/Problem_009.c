//////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern.
//
// Input  : iRow = 3   iCol = 4
// Output : *   #   *   #
//          *   #   *   #
//          *   #   *   #
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
            if (j % 2 == 0)
            {
                printf("#\t");
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

    printf("Enter number of Rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); 

    return 0;
}



// Time Complexity : O(n^2)
// Where, n = Number of rows & columns