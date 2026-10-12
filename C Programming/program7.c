/*
    Step 1: Understand the problem statment
    Step 2: Write the algorithm
    Step 3: Deside the programming language 
    Strp 4: Write the program 
    Step 5: Test the the program 
*/

/////////////////////////////////////////////////////////
//
// Step 1: Understand the problem satatment
//         user is going to enter any two integers
//         and we have to perform addition
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////

/*
    Step 2: Write the algorithm
        Start:
                    Accept first number as no1
                    Accept second number an no2
                    Create the variable as Ans to store the result 
                    Perform addition of no1 and no2
                    Display the result from Ans 
             
        End 
*/    

//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
/*
    Step 3: Deside the programming language 
        We selectC programming language
*/
//////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
/*
    Step 4: Write the program
*/
/////////////////////////////////////////////////////////

#include<stdio.h>

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

    return 0;
}