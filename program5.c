////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer
//  Output        : String
//  Description   : Gives iteration of string
//  Date          : 31/10/2026
//  Author        : Nupur Sunil Kodre
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    
    return EXIT_SUCCESS;
}