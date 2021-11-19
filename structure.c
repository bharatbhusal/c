#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int roll;
    int age;
};

int main()
{
    struct Student *s;
    s = (struct Student *)calloc(1, sizeof(struct Student));
    printf("Enter the name of Students: ");
    scanf("%[^\n]%[*c]", &s->name);
    printf("Enter the roll no. of Students: ");
    scanf(" %d", &s->roll);
    printf("Enter the age of Students: ");
    scanf(" %d", &s->age);
    printf("\nThe Roll no. of %s is %d. He is %d years old.\n", s->name, s->roll, s->age);
    free(s);
    return 0;
}