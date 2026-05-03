#include <stdio.h>

void change(int *p)
{
    printf("inside function before change: %d\n", *p);
    *p = *p + 10;
    printf("inside function after change: %d\n", *p);
}

int main()
{
    int x = 5;
    int *ptr = &x;

    printf("before function call: %d\n", x);
    change(ptr);
    printf("after function call: %d\n", x);

    return 0;
}