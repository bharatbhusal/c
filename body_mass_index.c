#include <stdio.h>
float *bmi(float *, float *);
void comments(float *);

void main()
{
    float height, weight, *index, value;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    index = bmi(&weight, &height);
    value = *index;
    printf("Your Body Mass Index is: %.2f\n", value);
    comments(index);
}

float *bmi(float *w, float *h)
{
    float *index;
    float a;
    a = (*w / (*h * *h));
    index = &a;
    return index;
}

void comments(float *index)
{
    if (*index <= 18.5)
    {
        printf("You should put on some weight.\n");
    }
    else if (*index <= 25.0)
    {
        printf("You are fine!!\n");
    }
    else if (*index <= 30.0)
    {
        printf("You should lose some weight.\n");
    }
    else
    {
        printf("You are obese.\n");
    }
}