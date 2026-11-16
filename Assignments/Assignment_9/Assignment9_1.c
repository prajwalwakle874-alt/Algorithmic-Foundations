/*
    input: 5
    output: *   *   *   *   *   #   #  #    #   #

    input: 6
    output: *   *   *   *   *   #   #  #    #   #   #   

    input: 5
    output: *   *   *   *   *   #   #  #    #   #

    input: 2
    output: *   *   #   #
*/ 


///////////////////////////////////////////////////
// Assignment 9.1
// Name: Prajwal Pramod Wakle
// Date: 16/11/2026
// Description: Accept number from user and display the pattern
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
