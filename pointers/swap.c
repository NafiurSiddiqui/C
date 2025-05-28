#include <stdio.h>

/**
 * -----------------------------------------
 * Pointers dymystified here
 * -----------------------------------------
 * Go through this well.
 * Go to GPT archives -> Pointers Practical Use-Cases GOLD MINE!
 *
 */

void faultySwap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 4; // stack memory local scope
    int y = 5;
    int *ptr_x = &x;
    int *ptr_y = &y;

    printf("X address: %p\n", ptr_x);
    printf("X value: %d\n", *ptr_x);
    printf("Y address: %p\n", ptr_y);
    printf("Y value: %d\n", *ptr_y);

    faultySwap(x, y);
    printf("x is: %d, y: %d\n", x, y); // stack memory was not changed
    swap(&x, &y);
    printf("x is: %d, y: %d\n", x, y);
}

void faultySwap(int a, int b)
{
    // arguments passed by value meaning (copies of values)
    // copies of a and b wherever it is passed down from.

    // printf("FAULTY SWAP\n");
    // printf("a is: %d, b is: %d\n", a, b);

    int temp = a;

    a = b;
    b = temp;

    // printf("a is: %d, b is: %d\n", a, b); //local stack memory was changed. orignal values outside is still untouched.
    // Because, we explicitly did not set pointers to go to the memory, wherever that is, and change the original value.
    printf("FAULTYs a addr: %p, b addr: %p\n", &a, &b); // see they are dealing with different memory location than the originals.
}

void swap(int *a, int *b)
{
    // Now you give this function real power to access memories, where a and b is stored.
    //*a =  pointing to the address in memory where the value is located.
    //*b = pointing to the address in memory where the value is located.

    int temp = *a; // you are dereferencing the a, setting the value of a into the temp.

    *a = *b;   // In the memory location of a, we set the value of b
    *b = temp; // In the location of memory of b, we set the value the temp holds before a was changed.

    // Now the original value is modified.
    printf("SWAPs a addr: %p, b addr: %p\n", &a, &b); // Same memory location as the original values.
}