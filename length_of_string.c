#include <stdio.h>

int lenght(char[30]);
int main()
{
    int len, i;
    char str1[30];
    printf("Type in the string: ");
    scanf("%[^\n]", str1);
    len = lenght(str1);
    char str2[30];
    printf("\nThere are %d characters in the string", len);

    for (i = (len - 1); i >= 0; i--)
    {
        str2[len - i - 1] = str1[i];
    }
    for (i = 0; i>= len; i++)
    {
        printf("%c", str2[i]);
    }
    return 0;
}

int lenght(char x[30])
{
    int i = 0;
    while (x[i] != '\0')
    {
        i++;
    }
    return i;
}