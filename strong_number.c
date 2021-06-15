#include <stdio.h>
int main()
{
    int i, range, digits, fact, j, strong, temp, k;
    range = 100000;
    for (i = 1; i <= range; i++)
    {
        strong = 0;
        temp = i;
        while (temp > 0)
        {
            digits = temp % 10;
            fact = 1;
            for (k = 1; k <= digits; k++)
            {
                fact *= k;
            }       
            temp /= 10;
            strong += fact;
        }

        if (strong == i)
        {
            printf("%d is a strong number\n", i);
        }
    }
}