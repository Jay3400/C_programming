//Accept two numbers from user and display first number in second number of times
#include<stdio.h>

void Display(int iNO , int iFrequency)
{
   int iCnt =0;

   for (iCnt =1; iCnt <= iFrequency; iCnt++)
   {
    printf("%d",iNO);
   }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number :");
    scanf("%d", &iValue);
    printf("Enter a number :");
    scanf("%d", &iCount);

    Display(iValue,iCount);
    return 0;
}