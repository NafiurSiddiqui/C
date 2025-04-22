#include <stdio.h>
#include <stdbool.h>

//C does not have a built-in bool type
//<stdbool> provide you with bool type

int main(){
	
	//_Bool somethingIsTrue = 1;
	
	bool somethingIsTrue = 1;
	bool somethingIsNotTrue= 0;
	printf("%i\n", somethingIsTrue);
	
	//careful when you compare or sum up integer with bool

	//printf("%i\n", somethingIsTrue + 2); //print out: 3
	//printf("%i\n", somethingIsNotTrue == 0); //print out: 1 (true)

	return 0;
}
