/*
    input: 5
    output: $   *   $   *   $   *   $   *   $   *

    input: 3
    output: $   *   $   *   $   *

    input: -3
    output: $   *   $   *   $   *
*/



///////////////////////////////////////////////////
// Assignment 7.1
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Pattern printing program
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNo)
{
    int iCnt = 0;

   if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}