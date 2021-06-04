#include<stdio.h>
int main()
{
    int arr1[] = {15, 25, 30, 35, 40, 45, 50};
    int size1 = sizeof(arr1)/sizeof(int);
    int i;
    int arr2[sizeof(arr1)/sizeof(int)];
    

    for (i = 0; i < size1; i++)
    {
        arr2[i] = arr1[size1-i-1];
    }
    
    for (i = 0; i < size1; i++)
    {
        printf("Arr1[%d]: %d\n", i, arr1[i]);
    }
    printf("\n");
    for (i = 0; i < size1; i++)
    {
        printf("Arr2[%d]: %d \n", i, arr2[i]);
    }
}