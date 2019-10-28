#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;

	// allocate an array on the stack
	int stack[10];

	for(i = 0; i < 10; i++){
		stack[i] = i;
	}

	// allocate an array on the heap 
	int* heap = (int*)malloc(10 * sizeof(int));

	for(i = 0; i < 10; i++){
		*(heap + i) = i;
	}

	// call stack element
	printf("stack[9]: %d\n", stack[9]);

	// call heap element method 1
	printf("heap[9]: %d\n", heap[9]);

	// call heap element method 2
	printf("heap[9]: %d\n", *(heap + 9));

return 0;
}
