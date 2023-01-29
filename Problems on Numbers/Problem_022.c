//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept distance in kilometre and convert
//                     it into meter.( 1Km = 1000m)
//
// Test cases :
// Input : 5    Output : 5000
// Input : 12   Output : 12000
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// Function declaration
int KMtoMeter(int);

int main ()
{
    int iValue = 0;       
    int iRet = 0;

    printf("Enter a distance in Km : ");
    scanf("%d", &iValue);             

    iRet = KMtoMeter(iValue);        

    printf("%d Km -> %d m", iValue, iRet);

    return 0;  
}


// Functon defination
int KMtoMeter(int iNo)
{
    int Meter = 0;
    Meter = iNo * 1000;
    return Meter;
}

// Time Complexity : O(1)