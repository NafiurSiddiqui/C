#include <stdio.h>
#include <stdlib.h>

/**
 * WARNING: do not fuck around with changing pointer location. Manipulate values located in the memory.
 */

int increment(int *value);
int main(void)
{
    int digit = 5; // stack memory - location can not be manipulated
    // int *digi2 = malloc(sizeof(int));
    // *digi2 = 10;

    printf("Before: %d\n", digit);

    increment(&digit);

    printf("After: %d\n", digit);

    return 0;
}

int increment(int *value)
{
    // printf("Pointer before increment: %p\n", value);
    (*value)++;
    // (**value2)++;
    // printf("Pointer after increment: %p\n", value);

    return *value;
}