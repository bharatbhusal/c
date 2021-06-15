#include <stdio.h>
#include <string.h>
int merge(char[100], char[100]);

int main()
{
    char str1[100];
    char str2[100];
    int len, space;

    printf("Enter the 1st string: ");
    scanf("%[^\n][%*c]", &str1);
    printf("Enter the 2nd string: ");
    scanf(" %[^\n][%*c]", &str2);
    len = strlen(str1);
    if (str1[len - 1] != ' ')
    {
        str1[len] = ' ';
        merge(str1, str2);
    }
    else if (str1[len - 1] == ' ')
    {
        merge(str1, str2);
    }
}

int merge(char x[100], char y[100])
{
    int i;
    int len = strlen(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        x[i + len] = y[i];
    }
    printf("\n");
    for (i = 0; x[i] != '\0'; i++)
    {
        printf("%c", x[i]);
    }
}