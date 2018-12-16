#include <stdio.h>
#include <string.h>

int test_stack(int n)
{
    char buf[16];
    if (n == 0) {
        strcpy(buf, "this is a test that should crash\n");
        printf("%s", buf);
        return 0;
    } else
        return test_stack(n - 1);    
}

int main()
{
    test_stack(5);
    return 0;
}