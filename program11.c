///////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckDivisible
//  Input         : Integer
//  Output        : string
//  Description   : check divisibility of number by 3
//  Date          : 17/11/2026
//  Author        : Nupur Sunil Kodre
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("Number is divisible\n");
    }
    else
    {
        printf("Number is not didvisible\n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);
    return EXIT_SUCCESS;
}