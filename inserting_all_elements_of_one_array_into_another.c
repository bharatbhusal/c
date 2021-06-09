#include <stdio.h>

int main()
{
    int arr1[50];
    int a;
    int arr2[50];
    int i, n, m, s, p;
    printf("Enter size of 1st array: ");
    scanf("%d", &n);
    printf("Enter %d elements of 1st array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of 2nd array: ");
    scanf("%d", &m);
    printf("Enter %d elements of 2nd array: ", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("The elements of 1st array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe elements of 2nd array are: ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", arr2[i]);
    }
    

    printf("\nFrom what index number do you want to insert elements of 2nd array in 1st array: ");
    scanf("%d", &p);

    for (i = (n - 1); i >= p; i--)
    {
        arr1[i+m] = arr1[i];
    }
    
    for (i = p; i <= (p+m-1); i++)
    {
        arr1[i] = arr2[i-p];
    }
    printf("\n1st array after inserting 2nd array in %d index is: ", p);
    for (i = 0; i < (n + m); i++)
    {
        printf("%d ", arr1[i]);
    }
}
