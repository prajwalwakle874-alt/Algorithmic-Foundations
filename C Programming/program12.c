#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter number :\n");
    if (scanf("%d",&no) != 1)
    {
        fprintf(stderr, "Invalid input\n");  //stderr is a predefined standard error stream provided by the C standard library.
                                             //fprintf stands for File Print Formatted

        return EXIT_FAILURE;
    }

    printf("input is valid\n");

    return EXIT_SUCCESS;
}