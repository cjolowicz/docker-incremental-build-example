#include <stdio.h>
#include <foo.h>

int main()
{
    for (;;)
    {
        int result = foo();

        printf("bar: %d\n", result);
    }

    return 0;
}
