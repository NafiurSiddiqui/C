#include <stdio.h>
#include <math.h>

int main()
{
    // create a program that takes two double values as inputs
    // and calculate the hyoptenuse of a right triangle
    // using the pythagorean theorem
    //and output the result
    double a, b;

    printf("Enter the first side: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid input for the first side. Please enter a number.\n");
        return 1;
    }
    printf("Enter the second side: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid input for the second side. Please enter a number.\n");
        return 1;
    }
    double c = sqrt((a * a) + (b * b));
    printf("Hypotenuse of the side %lf and %lf is: %lf\n", a, b, c);
    printf("%lf\n", sqrt(a * a));
    
    return 0;
}