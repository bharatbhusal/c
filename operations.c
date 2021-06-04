#include<stdio.h>
int main()
{
    long a, b, sum, diff, product, quotient, remainder;
    printf("Enter a: ");
    scanf("%ld",&a);
    printf("Enter b: ");
    scanf("%ld", &b);

    sum = a + b;
    printf("a + b = %ld\n", sum);

    diff = a - b;
    printf("a - b = %ld\n", diff);

    product = a * b;
    printf("a * b = %ld\n", product);

    quotient = a / b;
    printf("a / b = %ld\n", quotient);

    remainder = a%b;
    printf("a % b = %ld", remainder);
}