/*
    input: 5
    output: 15

    input: -5
    output: 15

    input: 10
    output: 945

    
*/ 


///////////////////////////////////////////////////
// Assignment 9.4
// Name: Prajwal Pramod Wakle
// Date: 16/11/2026
// Description: Odd factorial
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>



int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
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

    iRet = OddFactorial(iValue);
    printf("Odd factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}