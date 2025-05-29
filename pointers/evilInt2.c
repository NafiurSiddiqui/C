#include <stdio.h>

// FIXME: Go over the swap.c, have a revision and fix this code.

/**
 *(continued from 1)
 * Tunrs out he can't be killed because his clone lives inside the original address (4bytes)
 * GOAL: change the value to something else from outside via a function.
 * GOAL: Shift the pointer a block ahead.
 */

int increaseInt(int *value);
int shiftPointer(int **value);

int main(void)
{
    int number = 10;

    printf("Before: %i\n", number);
    printf("Location: %p\n", &number);
    // number++;
    increaseInt(&number);
    printf("After: %i\n", number);
    printf("Location: %p\n", &number);
}

int increaseInt(int *value)
{
    (*value)++;                                     // This first dereference (get the value) and then increase that value.
    *value++;                                       // this increase the pointer, moving it to the next int in memory.
    printf("Location from Int func: %p\n", &value); // This is still within the local copy. original is untouched.
}

// In case, you wanted to change the original pointer from a function, you would have to set a pointer to the pointer
int shiftPointer(int **value)
{
    (*value)++; // Now the original pointer will be shifted.
}