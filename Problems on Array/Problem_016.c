///////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and return largest number.
//
// Input  : N : 6
//          Elements : 85   66  3   76  93  88
// Output : 93
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int Length)
{

    int i = 0, iMax = Arr[0];

    for (i = 0; i < Length; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

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

    iRet = Maximum(p, iSize); 

    printf("Largest number is : %d", iRet);

    free(p); 

    return 0;
}

// Time complexity : O(n)
// Where n = size of array