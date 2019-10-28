#include <stdio.h>

int main(){

	int  x = 10;
	
	// x and y now point to the 
	// same memory location 
	int* y = &x;
	
	// dereference y to get the value
	// that it points to 
	*y = 20;

	// x has now been changed
	printf("x = %d\n", x);

return 0;
}
