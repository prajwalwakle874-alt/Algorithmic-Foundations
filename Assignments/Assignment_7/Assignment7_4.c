/*
    Input: 18
    Output: 1   3   5   7   9   11  13 
*/






///////////////////////////////////////////////////
// Assignment 7.4
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Accept the number from user and print Odd numbers upto N
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2!= 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}