////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and check wether that number contains 11 in it or  not.
//
// Input  : N : 6
//          Elements : 85   66  11   80  93  88
// Output : 11 is present
//
// Input  : N : 6
//          Elements : 85   66  3   80  93  88
// Output : 11 is absent
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength)
{

    int iCnt = 0, iEven = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}


int main()
{
    int iSize = 0, bRet = 0, iCnt = 0; // Local variables
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); // Dynamic memory allocation

    if (p == NULL) 
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accepting array elements
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize); // Function call

    if (bRet == TRUE)
    {
        printf("11 is Present ");
    }
    else
    {
        printf("11 is Absent ");
    }

    free(p); 

    return 0;
}

// Time complexity : O(n)
// Where n = size of array