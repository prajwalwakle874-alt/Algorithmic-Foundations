/*
    Input:4
    Output: -1  -2  -3  -4  0   1   2   3   4
*/


///////////////////////////////////////////////////
// Assignment 7.3
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

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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