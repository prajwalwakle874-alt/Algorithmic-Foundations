/*
    Input: 4
    Output: 4   8   12  16  20
*/





///////////////////////////////////////////////////
// Assignment 7.5
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Accept the number from user and print first 5 number of N
//input: Integer
//output: Integer
////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return EXIT_SUCCESS;
}