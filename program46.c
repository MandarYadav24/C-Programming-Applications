#include<stdio.h>

// Input : 7856   // 98675
// Output :       // 5     
// 6              // 7
// 5              // 6
// 8              // 8
// 7              // 9

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo /10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}






/*

iNo = 98675


















*/

























