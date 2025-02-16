#include <stdio.h>


int main()
{
	printf("The number of the eggs for the day: ");

	int eggs;
	scanf("%i", &eggs);	

	//double dozen = eggs / 12;
	//one of the issue with this is we won't get the right number because, int / int will always
	//truncate the decimal points to zero. so, 18/12 -> 1.5.... ->(int) 1 -> (double) because we store it i
	//double 1.000000
	//so we typecast the expression with double
	double dozen = (double) eggs / 12;
	//(dataType) affects only the immediate next value. So, double converts eggs (18) to 18.00
	printf("You have %f dozen eggs for today.\n", dozen);
	
	return 0;
}
