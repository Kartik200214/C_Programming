////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and accept another number as No,
//                     return index of first occurance of that No.
//
// Input  : N : 6      No : 66
//          Elements : 85   66  3   66  93  88
// Output : 1
//
// Input  : N : 6      No : 12
//          Elements : 85   11  3   15  11  111
// Output : -1
//
///////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
 
int FirstOcc(int Arr[], int iLength, int iValue)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iValue)
        {
            break;
        }
    }

    if (iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}


int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo = 0; 
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL) // If memory is not allocated
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        scanf("%d", &p[iCnt]);
    }

    printf("\nEnter a number to find its index : ");
    scanf("%d", &iNo);

    iRet = FirstOcc(p, iSize, iNo); 

    if (iRet == -1)
    {
        printf("%d Number is not there", iNo);
    }
    else
    {
        printf("Index of %d is : %d", iNo, iRet);
    }

    free(p); 

    return 0;
}
