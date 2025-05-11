#include <stdio.h>

int main(){
	
	//A GREAT EXAMPLE OF MODULUS OPERATOR

	int pizzaPieces = 5;
	int pizzaEaten = 2;
	int pizzaLeftOver = pizzaPieces % pizzaEaten;

	printf("%i\n", pizzaLeftOver);
	
	return 0;
}
