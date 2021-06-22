#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch;
    fp = fopen("try.txt", "a+");
    char *text = "hi there!!\nHow are you\nLong time no see bro\n";
    fprintf(fp, "%s", text);
    rewind(fp);
    ch = fgetc(fp);
    for (int i = 0; ch != EOF; i++)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
}