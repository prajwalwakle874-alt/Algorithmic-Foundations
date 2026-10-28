#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("it is even number \n");
    }
    else
    {
        printf("it is odd number \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    if((iValue % 2) == 0)
    {
        printf("it is even number \n");
    }
    else
    {
        printf("it is odd number \n");
    
    }
    
    return EXIT_SUCCESS;
}