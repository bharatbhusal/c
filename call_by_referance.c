#include <stdio.h>
void swap(int *x, int *y)
{
    int **temp = &x;
    *x = *y;
    *y = **temp;
}

void main()
{
    int a = 10;
    int b = 20;
    printf("Before Swap: \tA = %d, B = %d\n", a, b);
    swap(&a, &b);
    printf("After Swap: \tA = %d, B = %d", a, b);
}
