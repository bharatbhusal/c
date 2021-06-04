#include <stdio.h>
int main()
{
    int a, i, b, n, sum = 0;
    a = 152251;
    b = a;
    while(a>0)
    {
        n = a%10;
        sum = sum*10 +n;
        a = a/10;

    }
    
    if (b == sum)
    {
        printf("Pallendrom");
    }
    else
    {
        printf("Not pallendrom");
    }
}