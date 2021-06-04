#include <stdio.h>
int main()
{
    long p, i, v;
    p = 1007;
    for (i = 2; i < p; i++)
    {
        if (p % i != 0)
        {
            v = 1;
        }
        else
        {
            v = 0;
            printf("Not Prime number\n");
            break;
        }
        
    }
    if (v == 1)
    {
        printf("Prime number\n");
    }

}