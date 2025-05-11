#include <stdio.h>
#include <string.h>
int main(void)
{
    // creating string
    char greeting[] = "Hello You!";

    // second way
    char greeting2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // second way is bit cumbersome and also you MUST add the null terminator character at the end to define the end of the string.
    printf("From 1: %s\n", greeting);
    printf("Size of Greeting: %lu\n", sizeof(greeting));

    for (int i = 0; i <= strlen(greeting); i++)
    {
        /* code */
        printf(": %c\n", greeting[i]);

        // see the addresses of each character
        printf(": %p\n", &greeting[i]);
    }

    printf("\n");

    printf("From 2: %s\n", greeting2);
    printf("Size of Greeting: %lu\n", sizeof(greeting2));

    for (int i = 0; i <= strlen(greeting2); i++)
    {
        /* code */
        printf(": %c\n", greeting2[i]);
        // Ref for the memory
        printf(": %p\n", &greeting2[i]);
    }

    // Notic how the null terminator is always included.
    // for the memroy, notice how the string are just a contiguous memory which is only a byte aprat, represented in hex.

    return 0;
}