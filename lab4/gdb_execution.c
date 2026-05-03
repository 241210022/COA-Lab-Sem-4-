#include <stdio.h>

int main()
{
    int x = 5;
    int y = 10;
    int sum = x + y;

    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;

    int val1 = *(ptr + 2);
    int val2 = arr[3];

    printf("%d %d %d\n", sum, val1, val2);

    return 0;
}