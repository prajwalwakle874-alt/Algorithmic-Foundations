#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    printf("Enter your name : \n");
    scanf("%s", sName);

    printf("Wellcome %s", sName);

    return EXIT_SUCCESS;
}