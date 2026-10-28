#include"Header.h"

#include<assert.h> // assert is a built-in macro in C,It acts as a safety check that says:
                   // "I expect this condition to be true. If it isn't, something is critically wrong, so stop the program immediately."


int main()
{
    assert(Addition(10,11) == 21);

    assert(Addition(-10,20) == 10);

    assert(Addition(-10,-20) == -30);

    return EXIT_SUCCESS;
}