/*
    Step1 : Understand the problem statement 
    Step2 : Write the algrithm
    Step3 : Deside the programming language
    Step4 : Write the program
    Step5 : Test the program
    
*/

///////////////////////////////////////////////////////////////
// 
//   Step1 : Understand the problem statement
//           usere is going to entrer any two intergers 
//           and we have to perform addition
//////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////

/*
    Step2 : Write the algrithm
        Start
            Accept first no as no 1
            Accept second no as no 2
            cereate the variable as Ans to store the result 
            prform the addition and store into Ans 
            Display the result from Ans 
        end

*/

///////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////

/*
     Step3: Desuide the programming language\
     we select c programming
*/

///////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////

/*
    Step4: Write the program 
*/

///////////////////////////////////////////////////////////



#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  function name : Addition
//  input         : Intiger, Integer
//  output        : Integer
//  description   : Performs addition
//  date          : 04/10/2026
//  author        : Prajwal Pramod Wakle
//
//////////////////////////////////////////////////////////////
int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2 ; // Business logic

    return iAns;
}

//////////////////////////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////////////////////////
int main()
{

    int iValue1 = 0, iValue2 = 0, iResult = 0;
    
    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition (iValue1, iValue2);

    printf("Addition is :%d\n",iResult);

    return 0;
}

//////////////////////////////////////////////////////////////
//  Step5 : Test the program
//  
//  tested test cases
//-----------------------------------
//  Input1   Input2    Output
//   10         11       21
//   11         0        11
//   0          11       11
//   20         -9       11
//   -9         20       11
//  -20        -11      -31
//////////////////////////////////////////////////////////////