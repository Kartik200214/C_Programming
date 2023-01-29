///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept width and height of rectangle from user and
//                     calculate its area. (Area = Width * Height)
//
// Input :  5.3   9.78      Output : 51.8340
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// Function declaration
float RectArea(float, float);

int main()
{
    float iWidth = 0;     
    float iHeight = 0;
    float iRet = 0;

    printf("Enter the width of rectangle : ");
    scanf("%f", &iWidth);

    printf("Enter the Hight of rectangle : ");
    scanf("%f", &iHeight);

    iRet = RectArea(iWidth, iHeight);       // Function call

    printf("The Area of rectangle is : %.4f", iRet);

    return 0;      
}

// Function defination
float RectArea(float iW, float iH)
{
    float Area = 0;
    Area =  iW * iH;
    return Area;
}

// Time Complexity : O(1)
