#include <stdio.h>
#include <stdlib.h>

typedef char string[20];

struct Emp
{
    string name;
    int age;
    float sal;
};

typedef struct Emp employee;

void main()
{
    employee *ptr;
    int no_of_employee = 2;
    ptr = (employee *)malloc(no_of_employee * sizeof(employee));
    if (ptr == NULL)
    {
        printf("No memory allocated");
    }
    else
    {
        for (int i = 0; i < no_of_employee; i++)
        {
            printf("Enter the employee details(name age sallery): ");
            scanf("%s\n %i\n %f", &ptr[i].name, &ptr[i].age, &ptr[i].sal);
        }
        for (int i = 0; i < no_of_employee; i++)
        {
            printf("Name: %s  Age; %i  Sallery: %.2f\n", ptr[i].name, ptr[i].age, ptr[i].sal);
        }
    }
}