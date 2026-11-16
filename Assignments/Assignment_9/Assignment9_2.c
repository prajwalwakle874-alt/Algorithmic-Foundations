/*
    input: 10
    output: 700

    input: 3
    output: 270

    input: 1200
    output: 8400

    
*/ 


///////////////////////////////////////////////////
// Assignment 9.2
// Name: Prajwal Pramod Wakle
// Date: 16/11/2026
// Description: Accept number from user and convert 
//              dollers to rupees
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int DollerToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return EXIT_SUCCESS;
}