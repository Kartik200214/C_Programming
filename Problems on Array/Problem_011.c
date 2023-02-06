////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and accept another number as No,
//                     Check wether NO is present or not.
//
// Input  : N : 6      No : 66
//          Elements : 85   66  3   66  93  88
// Output : TRUE
//
// Input  : N : 6      No : 12
//          Elements : 85   11  3   15  11  111
// Output : FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

// Typedef for boolean
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength, int iNo)
{
    
    int iCnt = 0, iFrequency = 0;
    BOOL bAns = FALSE;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            bAns = TRUE;
        }
    }

    return bAns;
}


int main()
{
    int iSize = 0, iCnt = 0, iNo = 0; 
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); 

    if (p == NULL) 
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter a number to check : ");
    scanf("%d", &iNo);

    printf("\nEnter %d elements one by one : ");

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iNo); 

    if (bRet == TRUE)
    {
        printf("%d number is present ", iNo);
    }
    else
    {
        printf("%d number is not present ", iNo);
    }

    free(p); 

    return 0;
}

// Time complexity : O(n)
// Where n = size of array