#include <stdio.h>
int main()
{
    char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char arr2[sizeof(arr1) / sizeof(char)] = {};
    int i;
    int size1 = ((sizeof(arr1)) / (sizeof(char)));
    int size2 = ((sizeof(arr2)) / (sizeof(char)));

    for (i = 0; i < size1; i++)
    {
        arr2[(size2 - 1 - i)] = arr1[i];
    }

    for (i = 0; i < size1; i++)
    {
        printf("Arr1[%d]: %c\n", i, arr1[i]);
    }
    printf("\n");
    for (i = 0; i < size2; i++)
    {
        printf("Arr2[%d]: %c\n", i, arr2[i]);
    }
}