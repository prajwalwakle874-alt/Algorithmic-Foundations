/*
    Input   : 5
    Output  : 120

    Input   : -5
    Output  : 120
    
    Input   : 4
    Output  : 24
*/ 

///////////////////////////////////////////////////
// Assignment 8.3
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Write A Program To Find Factorial 
//              Of Given Number
// input: Integer
// output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        return 1;
    }
    else
    {
        return iNo * Factorial(iNo - 1);
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d :",iRet);

    return EXIT_SUCCESS;
}