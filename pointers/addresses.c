#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("Number: %i\n", number);
    printf("Location: %p\n", &number);
    number++;
    printf("After: %i\n", number);
    printf("Location: %p\n", &number);
}