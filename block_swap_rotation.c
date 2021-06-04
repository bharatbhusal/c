#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int d;
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    printf("Rotate by: ");
    scanf("%d", &d);
    printf("\n");
    int a[d];
    int b[size_of_arr - d];
    int i, j, m;

    for (i = 0; i <= (d - 1); i++)
    {
        a[i] = arr[i];
    }

    for (j = d; j <= (size_of_arr - 1); j++)
    {
        b[j - d] = arr[j];
    }

    int size_of_a = sizeof(a) / sizeof(a[0]);
    int size_of_b = sizeof(b) / sizeof(b[0]);

    printf("Size of arr: %d\n", size_of_arr);
    printf("Size of a: %d\n", size_of_a);
    printf("Size of b: %d\n\n", size_of_b);

    for (m = 0; m < size_of_a; m++)
    {
        printf("a[%d]: %d\n", m, a[m]);
    }
    printf("\n");

    for (m = 0; m < size_of_b; m++)
    {
        printf("b[%d]: %d\n", m, b[m]);
    }
    printf("\n");

    if (size_of_a <= size_of_b)
    {
        int br[size_of_a];
        int size_of_br = sizeof(br) / sizeof(br[0]);
        int bl[size_of_b - size_of_br];
        int size_of_bl = sizeof(bl) / sizeof(bl[0]);
        
        for (i = 0; i < (size_of_b - d); i++)
        {
            bl[i] = b[i];
        }

        for (i = 0; i < d; i++)
        {
            br[i] = b[i + size_of_b - d];
        }

        for (m = 0; m < size_of_bl; m++)
        {
            printf("bl[%d]: %d\n", m, bl[m]);
        }
        printf("\n");

        for (m = 0; m < size_of_br; m++)
        {
            printf("br[%d]: %d\n", m, br[m]);
        }
        printf("\n");

        for (i = 0; i < size_of_bl; i++)
        {
            arr[i] = bl[i];
        }

        for (i = size_of_bl; i < (size_of_bl + size_of_br); i++)
        {
            arr[i] = br[i - size_of_bl];
        }

        for (i = (size_of_bl + size_of_br); i < (size_of_bl + size_of_br+ size_of_a); i++)
        {
            arr[i] = a[i-size_of_bl - size_of_br];
        }
    }
    else
    {
        int al[size_of_b];
        int ar[size_of_a - size_of_b];
        int size_of_al = sizeof(al) / sizeof(al[0]);
        int size_of_ar = sizeof(ar) / sizeof(ar[0]);

        for (i = 0; i < (size_of_b); i++)
        {
            al[i] = a[i];
        }

        for (i = 0; i < (size_of_a - size_of_b); i++)
        {
            ar[i] = a[size_of_b + i];
        }

        for (m = 0; m < size_of_al; m++)
        {
            printf("al[%d]: %d\n", m, al[m]);
        }
        printf("\n");

        for (m = 0; m < size_of_ar; m++)
        {
            printf("ar[%d]: %d\n", m, ar[m]);
        }
        printf("\n");

        for (i = 0; i < size_of_b; i++)
        {
            arr[i] = b[i];
        }

        for (i = size_of_b; i < (size_of_b + size_of_al); i++)
        {
            arr[i] = al[i - size_of_b];
        }

        for (i = (size_of_b + size_of_al); i < (size_of_b + size_of_al+ size_of_ar); i++)
        {
            arr[i] = ar[i-size_of_b - size_of_al];
        }
    }
    for (m = 0; m < size_of_arr; m++)
    {
        printf("arr[%d]: %d\n", m, arr[m]);
    }
    
}