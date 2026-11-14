/*
    Input:8
    Output: 1   2   3   4   5   6   7   8
*/


///////////////////////////////////////////////////
// Assignment 7.2
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Accept the number from user and print that number
//input: Integer
//output: Integer
///////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
    int iCnt = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}