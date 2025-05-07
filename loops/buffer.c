#include <stdio.h>

int main()
{
    int x;
    int result = scanf("%d", &x);

    // remember scanf do no take whitespace into account. In that case, unparsed characters, including whitespace will remain in the buffer.

    if (result != 1)
    {
        printf("Invalid Input. scanf failed.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            printf("Leftover char: '%c'\n", ch);
            printf("result of input:%i\n", x);
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
