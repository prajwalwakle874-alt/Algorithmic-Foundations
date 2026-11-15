/*
    input: 75
    output: Medium
*/ 





///////////////////////////////////////////////////
// Assignment 8.1
// Name: Prajwal Pramod Wakle
// Date: 22/10/2026
// Description: Accept number from user
//input: Integer
//output: Integer
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void Number(int iNo)
{
    if (iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if (iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Small");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}