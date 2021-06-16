#include<stdio.h>

struct students
{
    char name[20];
    int age;
    int roll;
    float prize;
    int position;
};


int main()
{
    int i;
    struct students s[3];
    for (i = 0; i<3; i++)
    {
        printf("Enter the name of %i th student: ", (i+1));
        scanf(" %[^\n]%[*c]", &s[i].name);
    }

    for (i = 0; i<3; i++)
    {
        printf("Enter the age of %s: ", s[i].name);
        scanf(" %i", &s[i].age);
    }


    for (i = 0; i<3; i++)
    {
        printf("Enter the roll no. of %s: ",s[i].name);
        scanf(" %i", &s[i].roll);
    }


    for (i = 0; i<3; i++)
    {
        printf("Enter the prize of %s: ", s[i].name);
        scanf(" %f", &s[i].prize);
    }

    for (i = 0; i<3; i++)
    {
        printf("Enter the position of %s: ", s[i].name);
        scanf(" %i", &s[i].position);
    }

    for (i = 0; i<3; i++)
    {
        printf("%s of age %i years old whose roll no. is %i won Rs. %.2f being %i th in the class.\n", s[i].name, s[i].age, s[i].roll, s[i].prize, s[i].position);
    }
}