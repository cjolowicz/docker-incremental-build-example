#include <stdio.h>
#include <foo.h>

int main()
{
    for (;;)
    {
        int result = foo();

        printf("baz: %d\n", result);
    }

    return 0;
}
