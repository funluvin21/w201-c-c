#include <stdio.h>

int main()
{
    int age = 20;
    int *pointer = &age;

    printf("%d\n", *pointer);

    return 0;
}
