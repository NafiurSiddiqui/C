#include <stdio.h>
#include <string.h>

int main()
{
	// Note arrays are stored in contiguous memory

	int values[20]; // only 10 int elements are allowed
	int grades[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char greeting[] = "Hello You!";

	// Calculate the size of the arrays dynamically
	int values_size = sizeof(values) / sizeof(values[0]); // it could have been ay other values[n] as well, they all have same size in bytes. This is just a common convention to calculate size of an array.
	int grades_size = sizeof(grades) / sizeof(grades[0]);
	int greeting_size = strlen(greeting); // For strings, use strlen to get the length

	// printf("Values: %d, Grades: %d , Greetings: %d\n", values_size, grades_size, greeting_size);

	// NOTE one thing, the addresses distance will vary between data types.
	// for instance, for the follwoing integers, they will be only 4 bytes apart from each other. Int = 4 bytes
	// for the string, they will be 1 byte apart. Since chars are only 1 byte.
	for (int i = 0; i < 10; i++)
	{
		/* code */

		values[i] = i;
		printf("values[%d] = %d\n", i, values[i]);
		printf("Address of values[%d] = %p\n", i, &values[i]);
	}

	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		/* code */

		// grades[i] = i;
		printf("grades[%d] = %d\n", i, grades[i]);
		printf("Address of grades[%d] = %p\n", i, &grades[i]);
	}

	printf("\n");

	for (int i = 0; i < strlen(greeting); i++)
	{
		/* code */

		printf(": %c\n", greeting[i]);

		// see the addresses of each character
		printf(": %p\n", &greeting[i]);
	}

	return 0;
}
