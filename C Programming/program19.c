#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
   if ((iNo % 2 ) == 0)
   {
        return true;
   }
   else
   {
        return false;
   }
}

int main()
{
    int iValue = 2;
    bool bRet = false;

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("it is even number \n");
    }
    else
    {
        printf("it is odd number \n");
    
    }
    
    return EXIT_SUCCESS;
}