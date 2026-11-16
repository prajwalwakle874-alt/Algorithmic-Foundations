/*
    input: 5
    output: 7

    input: -5
    output: -7

    input: 10
    output: 3840

    
*/ 


///////////////////////////////////////////////////
// Assignment 9.4
// Name: Prajwal Pramod Wakle
// Date: 16/11/2026
// Description: difference between Odd and Even factorial
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>



int FactorialDifference(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iOddFact = iOddFact * iCnt;
    }

     for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    return iOddFact - iEvenFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDifference(iValue);
    printf("Factorial difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}