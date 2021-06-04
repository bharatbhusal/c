#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, temp, j, d;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Rotate by: ");
    scanf("%d", &d);
    for (j = 0; j< d; j++)
    {
        temp = arr[0];
        for (i = 0; i < (n - 1); i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        
    }
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    
}