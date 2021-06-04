#include<stdio.h>
int main ()
{
    int per_num, i, j, sum;
    

    for (j=1; j<=10000; j++)
    {
        per_num = j;
        sum = 0;
        for (i = 1; i<per_num; i++)
        {
            if (per_num % i ==0)
            {
                sum += i;
            }
        }

        if (sum == per_num)
        {
            printf("%d is a perfect number\n", per_num);
        }
    }
}