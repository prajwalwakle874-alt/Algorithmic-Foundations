#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input : Integer, Integer
//  Output : Integer
//  Description : Perform Addition
//  Date : 10/06/2024
//  Author : Prajwal Pramod Wakle
//
////////////////////////////////////////////////////////////////////////


int Addition(int iNo1, int iNo2)
{
    int Ans = 0;

    Ans = iNo1 + iNo2;

    return Ans;
}

//////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr, "Unable to proceed as input is invalid\n");
        return EXIT_FAILURE;
    }

    printf("Enter second number :\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr, "Unable to proceed as input is invalid\n");
        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////
//  Step 5 : Test the Program
//
//  tested test cases :
//---------------------------------------------------------
// Input1     Input2    Output
//  10         11        21
//  11         0        11
//  0          11        11
//  20         -9       11
//  -9         20       11
//  -20        -11      -31
//
///////////////////////////////////////////////////////////