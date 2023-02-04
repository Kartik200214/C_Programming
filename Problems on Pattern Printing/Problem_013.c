//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 3     iCol = 5
// Output : A   A   A   A   A
//          B   B   B   B   B
//          C   C   C   C   C
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    // Logic
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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
