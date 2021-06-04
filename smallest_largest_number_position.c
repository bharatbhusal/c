#include<stdio.h>
int main()
{
    int arr1[] = {10, 4, 5, 3, 6, -1, 8, 9, -1, 100};
    int number = arr1[0];
    int position, i;

    for (i = 0; i<(sizeof(arr1)/sizeof(int)); i++)
    {
        if (arr1[i]< number)
        {
            number = arr1[i];
            position = i;
        }
    }
    printf("The smallest number in the given array is %d which is in %dth position\n\n", number, position);

    for (i = 0; i<(sizeof(arr1)/sizeof(int)); i++)
    {
        if (arr1[i]> number)
        {
            number = arr1[i];
            position = i;
        }
    }
    printf("The largest number in the given array is %d which is in %dth position\n", number, position);

}