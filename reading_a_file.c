#include <stdio.h>

int main()
{
    FILE *fp;
    int c;
    int n = 0;

    fp = fopen("try.txt", "r");
    if (fp == NULL)
    {
        printf("No such file found\n");
        return 0;
    }
    c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    printf("\n");

    fclose(fp);
    return (0);
}