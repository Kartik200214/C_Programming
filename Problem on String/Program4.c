#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 65) && (ch <= 90)) //<<<<<<<<<<<
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one charcter\n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("%c is a Capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not a Capital case letter\n",cValue);  
    }

    return 0;
}