#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    if(bRet == TRUE)
    {
        printf("%d is divisible by 5\n");
    }
    else
    {
        printf("%d is not divisible by 5\n");
    }
    return EXIT_SUCCESS;
}