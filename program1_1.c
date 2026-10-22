//program to divide two numbers

#include<stdio.h>
int Divide(int iNO1,int iNO2)
{
    int iAns = 0;
    if(iNO2 == 0)
    {
        return -1;
    }
    iAns = iNO1 / iNO2;
    return iAns;
}
int main()
{
    int iValue1 = 15,ivalue2 = 5;
    int iRet = 0;
    iRet = Divide(iValue1,ivalue2);
    printf("Division is %d",iRet);
    return 0;
}