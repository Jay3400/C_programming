
//Write a program which accept number from user and print even factors of that number.

// Input :7
//output : 2 4 6 8 10 12 14

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}