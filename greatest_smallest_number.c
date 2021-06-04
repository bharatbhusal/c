#include<stdio.h>
int main()
{
    int a, b, c;
	printf("Enter any three numbers: \n");
	scanf("%d, %d, %d", &a, &b, &c);
	if (a>b && a> c)
	{
		printf("%d is the greatest number among %d, %d, %d\n", a, a, b, c);
	}
	else if (b>a && b>c)
	{
		printf("%d is the greatest number among %d, %d, %d\n", b, a, b, c);
	}
	else
	{
		printf("%d is the greatest number among %d, %d, %d\n", c, a, b, c);
	}
	printf("And \n");


	
	if (a<b && a<c)
	{
		printf("%d is the smallest number among %d, %d, %d\n", a, a, b, c);
	}
	else if (b<a && b<c)
	{
		printf("%d is the smallest number among %d, %d, %d\n", b, a, b, c);
	}
	else
	{
		printf("%d is the smallest number among %d, %d, %d\n", c, a, b, c);
	}
}