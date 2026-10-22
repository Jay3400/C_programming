//  Accept number from user and  check whether number is even or odd
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNO )
{
    if((iNO % 2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number  : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("It is Even number\n");
    
    }
    else
    {
        printf("It is an odd number\n");
    }
    return 0;
}