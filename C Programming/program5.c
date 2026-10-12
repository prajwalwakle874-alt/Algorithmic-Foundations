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

int main()
{
    int iValue1, iValue2, iResult;

    printf ("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2 ; //Business logic

    printf("Addition is :%d\n",iResult);

    return 0;
}