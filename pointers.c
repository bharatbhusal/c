#include<stdio.h>

void main()
{
    int a = 100;
    int* ptr;
    char* c;
    float* f;
    ptr = &a;
    printf("%u\n", a);
    printf("0x%x\n", &a);
    printf("0x%x\n", ptr);
    printf("0x%x\n", &ptr);
    printf("%u\n", *ptr);
    printf("%u\n", *(&a));
    printf("%u\n", sizeof(ptr));        
    printf("%u\n", sizeof(c));
    printf("%u\n", sizeof(f));
}