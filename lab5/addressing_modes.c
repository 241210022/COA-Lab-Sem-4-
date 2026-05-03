#include <stdio.h>

int main()
{
    int a = 10;
    int b = a;

    int arr[3] = {1, 2, 3};
    int *p = &a;

    int c = *p;
    int d = arr[1];

    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}