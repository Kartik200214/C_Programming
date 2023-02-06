/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and Display summation of digits of each number.
//
// Input  : N : 6
//          Elements : 8525   665  3   76  953  858
// Output : 17  17  3   13  17  21
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


void DigitsSum(int Arr[], int Length)
{
    int i = 0, iDigit = 0, iNo = 0, iSum = 0;

    for (i = 0; i < Length; i++)
    {
        iNo = Arr[i];
        iDigit = 0, iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iDigit + iSum;
            iNo = iNo / 10;
        }
        printf("%d\t", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0; 
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); 

    if (p == NULL) 
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize); 

    free(p);

    return 0;
}

// Time complexity : O(n)
// Where n = size of array