///////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer
//  Output        : Integer
//  Description   : Gives  sequence of numbers in descending order
//  Date          : 17/11/2026
//  Author        : Nupur Sunil Kodre
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    
    return EXIT_SUCCESS;
}