/*
    Input   : 2
    Output  : 2 4 6 8 10 12 14 16 18 20

    Input   : 5
    Output  : 5 10 15 20 25 30 35 40 45 50
    
    Input   : -5
    Output  : 5 10 15 20 25 30 35 40 45 50
*/ 

///////////////////////////////////////////////////
// Assignment 8.4
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Write A Program which accepts number 
//              from user and display its table 
// input: Integer
// output: Integer
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}