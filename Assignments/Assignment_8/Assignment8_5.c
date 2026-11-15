/*
    Input   : 2
    Output  : 20    18  16  14 12 10 8 6 4 2

    Input   : 5
    Output  : 50 45 40 35 30 25 20 15 10 5
    
    Input   : -5
    Output  : 50 45 40 35 30 25 20 15 10 5
*/ 

///////////////////////////////////////////////////
// Assignment 8.5
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Write A Program which accepts number 
//              from user and display its table in reverse order
// input: Integer
// output: Integer
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RevTable(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    RevTable(iValue);

    return EXIT_SUCCESS;
}