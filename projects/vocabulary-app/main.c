// vocab_builder.c - Project 1: Dynamic Vocabulary Builder
// STUDY this
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 50
#define MAX_DEF_LEN 200

// Define the Word struct using typedef
typedef struct
{
    char word[MAX_WORD_LEN];
    char definition[MAX_DEF_LEN];
} Word;

// Function declarations
void add_word(Word **list, int *size);
void print_words(Word *list, int size);
void free_words(Word *list);

int main()
{
    Word *word_list = NULL;
    int word_count = 0;
    int choice;

    while (1)
    {
        printf("\n--- Vocabulary Builder ---\n");
        printf("1. Add Word\n");
        printf("2. View Words\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer

        switch (choice)
        {
        case 1:
            add_word(&word_list, &word_count);
            break;
        case 2:
            print_words(word_list, word_count);
            break;
        case 3:
            free(word_list);
            printf("Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}

void add_word(Word **list, int *size)
{
    *list = realloc(*list, (*size + 1) * sizeof(Word));
    if (!*list)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter word: ");
    fgets((*list)[*size].word, MAX_WORD_LEN, stdin);
    (*list)[*size].word[strcspn((*list)[*size].word, "\n")] = '\0';

    printf("Enter definition: ");
    fgets((*list)[*size].definition, MAX_DEF_LEN, stdin);
    (*list)[*size].definition[strcspn((*list)[*size].definition, "\n")] = '\0';

    (*size)++;
    printf("Word added!\n");
}

void print_words(Word *list, int size)
{
    if (size == 0)
    {
        printf("No words added yet.\n");
        return;
    }
    printf("\n--- Vocabulary List ---\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d. %s - %s\n", i + 1, list[i].word, list[i].definition);
    }
}
