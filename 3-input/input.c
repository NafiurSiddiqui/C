#include <stdio.h>

int main()
{
	int radius = 1000; //The distance from outside of a circle to the center of the circle
	
	printf("Please enter a radius: ");

	scanf("%i", &radius); // & - address-of operator, used when you want to change a value dynamically from outside

	printf("The given radius is: %i\n", radius);
	
	return 0;

}
