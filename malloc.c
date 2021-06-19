#include <stdio.h>
#include <stdlib.h>

struct Emp
{
    char name[20];
    int age;
    float sal;
};

void main()
{
    struct Emp *ptr;
    ptr = (struct Emp *)malloc(sizeof(struct Emp));
    if (ptr == NULL)
    {
        printf("No memory allocated");
    }
    else
        {
        printf("Enter the employ details: ");
        scanf("%s\n %i\n %f", &ptr->name, &ptr->age, &ptr->sal);
        printf("Name: %s\n Age; %i\nSallery: %.2f\n", ptr->name, ptr->age, ptr->sal);
        }
}