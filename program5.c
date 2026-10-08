/*
    Step1 : Understand the problem statement 
    Step2 : Write the algrithm
    Step3: Desuide the programming language
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

int main()
{

    int iValue1 = 0, iValue2 = 0, iResult = 0;
    
    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2; // Business logic

    printf("Addition is :%d\n",iResult);

    return 0;
}