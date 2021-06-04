#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int d;
    int i, j, k, l, m;
    int n = sizeof(arr1) / sizeof(arr1[0]);

    printf("Rotate by: ");
    scanf("%d", &d);
    int temp[d];

    
    for (j = 0; j < d; j++)
    {
        temp[j] = arr1[j];
    }

    for (k = 0; k < (n - d); k++)
    {
        arr1[k] = arr1[k + d];
    }

    for (l = 0; l < d; l++)
    {
        arr1[l+n-d] = temp[l];
    }
    
    for (m = 0; m < n; m++)
    {
        printf("arr[%d]: %d\n", m, arr1[m]);
    }
    /*i changed this*/
}
