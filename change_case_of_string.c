#include <stdio.h>
int main()
{
    char str[300];
    int i;

    printf("Enter the string: ");
    scanf("%[^\n][%*c]", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] += 32;
        }
        else if (str[i]>= 'a' && str[i]<= 'z')
        {
            str[i] -= 32;
        }
        printf("%c", str[i]);
    }
    return 0;
}