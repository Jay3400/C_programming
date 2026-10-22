//Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo".

#include<stdio.h>

int Display(int iNO)
{
    if(iNO < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}