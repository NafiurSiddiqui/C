#include <stdio.h>

int main()
{
	int radius;
	
	printf("Please enter a number: ");
	scanf("%i", &radius);

	//calculate area with the formula
	double area = 3.14159 * (radius * radius);
	
	printf("The area of a circle with %i radius is: %f\n",radius, area);
	return 0;

}
