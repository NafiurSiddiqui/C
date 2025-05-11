#include<stdio.h>

int main(){
	
	char ascii;
	printf("Please enter a character: ");
	scanf("%c", &ascii);
	printf("Char is: %c\n ", ascii);
	printf("Char converted to Int: %i (ASCII value of character %c)\n", ascii, ascii);
	
	//int to char
	int integer;
	printf("Now, Enter a number (0 - 127): ");
	scanf("%i", &integer);
	printf("Number is:%i\n", integer);
	printf("Number converted to Char: %c\n", integer);

	
	return 0;
}
