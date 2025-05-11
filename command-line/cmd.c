#include <stdio.h>

int main(int argc, char *argv[])
{
    // argc = argument count
    // argv = argument vector

    // TEST THIS
    //  printf("ARGC: %d\n", argc);
    //  printf("ARGV: %s & %s\n", argv[0], argv[1]);

    // test this for getting all the characters
    for (int i = 0; i < argc; i++)
    {

        printf("Characeters for, %s is: \n", argv[i]);

        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            printf("Characters,%c\n", argv[i][j]);
        }
        printf("\n");
    }

    // if (argc > 1)
    // {
    //     for (int i = 0; i < argc; i++)
    //     {
    //         /* code */
    //         printf("hello, %s\n", argv[i]);
    //     }
    // }
    // else
    // {
    //     printf("Make sure to provide an argument after the program name.\n");
    //     printf("Argv: %s, %s\n", argv[0], argv[1]);
    // }

    return 0;
}