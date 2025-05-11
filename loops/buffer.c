#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Positive number: ");
    int result = scanf("%d", &x);

    // remember scanf do no take whitespace into account. In that case, unparsed characters, including whitespace will remain in the buffer.

    if (result != 1)
    {
        printf("Invalid Input. scanf failed.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            printf("Leftover char in buffer: '%c'\n", ch);
            printf("User Input:%i\n", x);
        }

        printf("Cleaning Junk...");
        // flush the buffer
        while (getchar() != '\n')
            ;
    }
    else
    {
        printf("result of input:%i\n", x);
    }

    return 0;
}
