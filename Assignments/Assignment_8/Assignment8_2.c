/*
    Input: 9
    Output: Nine

    Input: -3
    Output: Three
    
    Input: 12
    Output: Invalid Number
*/ 


///////////////////////////////////////////////////
// Assignment 8.2
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Accept number from user and print 
//              the number in words
// input: Integer
// output: Integer
///////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
    if (iNo == 1)
    {
        printf("One");
    }
    else if (iNo == 2)
    {
        printf("Two");
    }
    else if (iNo == 3)
    {
        printf("Three");
    }
    else if (iNo == 4)
    {
        printf("Four");
    }
    else if (iNo == 5)
    {
        printf("Five");
    }
    else if (iNo == 6)
    {
        printf("Six");
    }
    else if (iNo == 7)
    {
        printf("Seven");
    }
    else if (iNo == 8)
    {
        printf("Eight");
    }
    else if (iNo == 9)
    {
        printf("Nine");
    }
    else 
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}
