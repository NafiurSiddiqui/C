#include <stdio.h>

int main() {
    int a = 5;
    int b = -10;

    // Unary plus (doesn't change the value, just makes intent explicit)
    int result1 = +a; // result1 = 5

    // Unary minus (negates the value)
    int result2 = -a; // result2 = -5

    // Applying unary plus and minus to a negative value
    int result3 = +b; // result3 = -10
    int result4 = -b; // result4 = 10

    printf("Unary plus on a: %d\n", result1);
    printf("Unary minus on a: %d\n", result2);
    printf("Unary plus on b: %d\n", result3);
    printf("Unary minus on b: %d\n", result4);

    return 0;
}
	
