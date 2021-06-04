#include<stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[sizeof(arr1)/4] = {};
    int i;
    int size1 = ((sizeof(arr1))/(sizeof(int)));
    int size2 = ((sizeof(arr2))/(sizeof(int)));

    for (i = 0; i < size1; i++)
    {
        arr2[(size2 - 1 - i)] = arr1[i];
    }

    for (i = 0; i < size1; i++)
    {
        printf("Arr1[%d]: %d\n", i, arr1[i]);
    }
    printf("\n");
    for (i = 0; i < size2; i++)
    {
        printf("Arr2[%d]: %d\n", i, arr2[i]);
    }
}