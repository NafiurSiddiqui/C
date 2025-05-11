#include <stdio.h>

int main()
{
    // do-while loop
    int userNumber = 0;

    do
    {
        /* code */
        printf("Enter a Positive number (0 to exit): ");
        int result = scanf("%d", &userNumber);

        // Check if the input was valid, without the follwoing code, it will start an infinite loop.
        if (result != 1)
        {
            printf("\nInvalid Input. Please make sure no white-space was put.\n");

            printf("Remaining characters in buffer:\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                printf("'%c' (ASCII %d)\n", ch, ch);
            }

            // Clear junk from buffer
            while (getchar() != '\n')
                ;
            continue;
        }

        if (userNumber < 0)
        {
            printf("Please enter a positive number.\n");
        }
        else if (userNumber == 0)
        {
            printf("Exiting the program.\n");
            break;
        }
        else
        {
            printf("You entered: %d\n", userNumber);
        }
    } while (userNumber != 0);
}

// GPT explains
/**
 * Excellent test — and your observation is 100% correct. Let's break down *why* `scanf("%d", &userNumber)` still returns `1` when you input `6 * 6`, and what exactly is happening under the hood.

---

### ⚙️ What happens when you enter `6 * 6`

When you type:

```txt
6 * 6
```

Here’s what `scanf("%d", &userNumber);` sees:

1. It **reads up to the first whitespace or invalid character** for the format `%d`.
2. It **successfully parses `6`** and assigns it to `userNumber`.
3. It **stops reading when it hits the `*`**, which is **not part of an integer**.
4. It **returns 1**, because **one valid integer was read**.
5. **The rest (`* 6\n`) stays in the input buffer**, waiting for the next `scanf`.

So on the next loop iteration, the leftover `*` causes `scanf("%d", &userNumber)` to fail, and **this is where the infinite loop starts** if you don’t flush the input buffer.

---

### ✅ Fix: You still need to flush the input buffer

Even if `scanf` returns 1, garbage might be **left behind**. Here's how to detect and handle that better:

```c
#include <stdio.h>

int main()
{
    int userNumber = 0;

    do
    {
        printf("Enter a Positive number (0 to exit): ");

        int result = scanf("%d", &userNumber);

        if (result != 1)
        {
            printf("Invalid input. Please enter a valid integer.\n");
            // Clear junk from buffer
            while (getchar() != '\n');
            continue;
        }

        // Clean up remaining input to avoid leftover junk like '*'
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            if (ch != ' ' && ch != '\t')  // If not just whitespace, it's junk
            {
                printf("Unexpected characters after number. Please enter only an integer.\n");
                // Drain rest of line
                while ((ch = getchar()) != '\n' && ch != EOF);
                continue;
            }
        }

        if (userNumber < 0)
        {
            printf("Please enter a positive number.\n");
        }
        else if (userNumber == 0)
        {
            printf("Exiting the program.\n");
            break;
        }
        else
        {
            printf("You entered: %d\n", userNumber);
        }

    } while (userNumber != 0);

    return 0;
}
```

---

### 🧪 Try These Inputs:

| Input   | Behavior                     |
| ------- | ---------------------------- |
| `5`     | Valid                        |
| `-3`    | Prompts for positive number  |
| `abc`   | Invalid input                |
| `6 * 6` | Warns about unexpected chars |

---

Let me know if you'd like a cleaner version with reusable input functions or if you're planning to extend this to floats, strings, or file-based input.

 *
 */