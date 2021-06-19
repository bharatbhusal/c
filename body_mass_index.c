#include <stdio.h>
float bmi(float, float);
void comments(float);

void main()
{
    float height;
    float index;
    float weight;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    index = bmi(weight, height);
    printf("Your Body Mass Index is: %.2f\n", index);
    comments(index);
}

float bmi(float w, float h)
{
    float index;
    index = (w / (h * h));
    return index;
}

void comments(float index)
{
    if (index <= 18.5)
    {
        printf("You should put on some weight.\n");
    }
    else if (index <= 25.0)
    {
        printf("You are fine!!\n");
    }
    else if (index <= 30.0)
    {
        printf("You should lose some weight.\n");
    }
    else
    {
        printf("You are obese.\n");
    }
}