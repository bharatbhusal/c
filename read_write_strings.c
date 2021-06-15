#include<stdio.h>
#include<string.h>

int main()
{
    char str[5];
    printf("Enter the string: ");
    scanf("%[^\n]%[*c]", str);
    printf("%s", str);
}