////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and accept another number as No,
//                     return frequency of No from it.
//
// Input  : N : 6      No : 66
//          Elements : 85   66  3   66  93  88
// Output : 2
//
// Input  : N : 6      No : 12
//          Elements : 85   11  3   15  11  111
// Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{

    int iCnt = 0, iFrequency = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}


int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo; 
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); 

    if (p == NULL) 
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter a number to count frequency : ");
    scanf("%d", &iNo);

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accept Array elements
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iNo); 

    printf("Result is %d", iRet);

    free(p); 

    return 0; 
}
// Time complexity : O(n)
// Where n = size of array