#include <stdio.h>

int main(int argc, char** argv){
	
	// extract the argument provided
	// by the user
	//
	char* arg = argv[1];

	// allocate an array and ignore 
	// every security precaution
	// known to man
	//
	char arr[1024];

	// copy over the string the user 
	// types in
	// 
	int i;
	for(i = 0;;i++){
		arr[i] = arg[i];
		if(arg[i] == '\x00') break;
	}

	// tell the user what they typed
	//
	printf("You typed %s\n", arr);

return 0;
}
