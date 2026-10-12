#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
// Function name : Addition
// Input         : Intiger, Intiger
// Output        : Intiger
// Description   : Perform addition
// Date          : 04/10/2026
// Author        : Prajwal Pramod Wakle
//
////////////////////////////////////////////////////////

int Addition (int No1, int No2)
{
    int iAns = 0;

    iAns = No1 + No2; //Business logic

    return iAns;
}

/////////////////////////////////////////////////////////
//
// Entry point of a applicatin
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2, iResult;

    printf ("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition (iValue1, iValue2) ; 

    printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////
// Step 5: Test the the program
//
// tested test cases are
//------------------------------
// Input1   Input2   Output
// 10       11       21
// 11       0        11
// 0        11       11
// 20       -9       11
// -9       20       11
// -20     -11       -31