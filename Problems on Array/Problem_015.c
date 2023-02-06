///////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and return product of all odd elements.
//
// Input  : N : 6
//          Elements : 15   66  3   70  10  88
// Output : 45
//
// Input  : N : 6
//          Elements : 44   66  72   70  10  88
// Output : 0
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int Length)
{

    int i = 0, iProduct = 1, iNo = 0;

    for (i = 0; i < Length; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iProduct = iProduct * Arr[i];
            iNo++;
        }
    }

    if (iNo == 0)
    {
        return -1;
    }
    else
    {
        return iProduct;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0; 
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

    iRet = Product(p, iSize); 

    if (iRet == -1)
    {
        printf("\n (0) No odd numbers ! ");
    }
    else
    {
        printf("Product is : %d", iRet);
    }

    free(p); 

    return 0;
}

// Time complexity : O(n)
// Where n = size of array