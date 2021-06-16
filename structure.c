#include<stdio.h>

struct Student
{
    char name[20];
    int roll;
    int age;
};

int main()
{
    struct Student s;
    printf("Enter the name of Students: ");
    scanf("%[^\n]%[*c]", &s.name);
    printf("Enter the roll no. of Students: ");
    scanf(" %d", &s.roll);
    printf("Enter the age of Students: ");
    scanf(" %d", &s.age);
    printf("\nThe roll no. of %s is %d. He is %d years old.", s.name, s.roll, s.age);
    printf("\nSize of the structure Student is: %i", sizeof(s));


}