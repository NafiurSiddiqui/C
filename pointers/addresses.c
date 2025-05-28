#include <stdio.h>

// FIXME: Go over the swap.c, have a revision and fix this code.

/**
 * A damn evil integer slowly killing the system. We have identified the integer!
 * The guard is too thick! can't seem to break it. Only way to kill the integer is to break its constant ego!
 * The value it holds!
 *
 * GOAL: change the value to something else from outside via a function.
 */

int increaseInt(int value);

int main(void)
{
    int number = 10;

    printf("Number: %i\n", number);
    printf("Location: %p\n", &number);
    // number++;
    number = increaseInt(number);
    printf("After: %i\n", number);
    printf("Location: %p\n", &number);
}

int increaseInt(int value)
{
    return ++value;
}