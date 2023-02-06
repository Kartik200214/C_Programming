/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and Display all such numbers which contains 3 digits in it.
//
// Input  : N : 6
//          Elements : 8525   665  3   76  953  858
// Output : 3  953
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int Length)
{

    int i = 0, iDigit = 0, iNo = 0;

    for (i = 0; i < Length; i++)
    {
        iNo = Arr[i];

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if (iDigit == 3)
            {
                printf("%d\t", Arr[i]);
                break;
            }
            iNo = iNo / 10;
        }
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

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize); 

    free(p); 

    return 0;
}

// Time complexity : O(n)
// Where n = size of array