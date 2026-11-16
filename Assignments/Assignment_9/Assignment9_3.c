/*
    input: 5
    output: 8

    input: -5
    output: 8

    input: 10
    output: 3840

    
*/ 



///////////////////////////////////////////////////
// Assignment 9.3
// Name: Prajwal Pramod Wakle
// Date: 16/11/2026
// Description: Even factorial
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>



int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}