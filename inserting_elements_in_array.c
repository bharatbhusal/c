#include <stdio.h>

int main()
{
    int arr1[50];
    int i, n, s, p, repeat = 1;
    printf("Enter size of your array: ");
    scanf("%d", &n);
    printf("Enter %d elements of your array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The elements of your array so far are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    while (repeat == 1)
    {
        printf("\nEnter the element you want to insert: ");
        scanf("%d", &s);
        printf("\nIn what index number do you want to insert %d in the array: ", s);
        scanf("%d", &p);

        for (i = (n - 1); i >= 0; i--)
        {
            if (i == p)
            {
                arr1[i + 1] = arr1[i];
                arr1[i] = s;
            }
            else
            {
                if (i > p)
                {
                    arr1[i + 1] = arr1[i];
                }
            }
        }
        printf("\nYour array after inserting %d in %d index is: ", s, p);
        for (i = 0; i < (n+1); i++)
        {
            printf("%d ", arr1[i]);
        }
        printf("\nDo you want to insert more elements?(1/0): ");
        scanf("%d", &repeat);
    }
}
