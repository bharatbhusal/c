#include<stdio.h>
int main()
{
    int a, b, i, sum_even, sum_odd;
    a= 0;
    b= 7;
    sum_even = 0;
    sum_odd = 0;

    for (i = ++a; i < b; i++)
    {
        if (i % 2 == 0)
        {
           sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }
    printf("The sum of the even numbers between %d and %d is %d\n\n", a, b, sum_even);
    printf("The sum of the odd numbers between %d and %d is %d", a, b, sum_odd);
}