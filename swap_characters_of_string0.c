/*#include <stdio.h>
int main()
{
    char str[20];
    int i, j, n;
    char temp;
    printf("Enter the string: ");
    scanf("%[^\n][%*c]", &str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("There are %d characters in the string.\n", i);
    n = (i - 1);
    for (j = 0; (n - j) >= (i / 2); j++)
    {
        temp = str[j];
        str[j] = str[n - j];
        str[n - j] = temp;
    }

    for (j = 0; str[j] != '\0'; j++)
    {
        printf("%c", str[j]);
    }
}
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, j, n;
    char temp;
    printf("Enter the string: ");
    scanf("%[^\n][%*c]", &str);
    i = strlen(str);
    printf("There are %d characters in the string.\n", i);
    for (j = 0; j < i; j++, i--)
    {
        temp = str[j];
        str[j] = str[i-1];
        str[i-1] = temp;
    }

    for (j = 0; str[j] != '\0'; j++)
    {
        printf("%c", str[j]);
    }
}