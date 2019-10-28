/*
	Program: auth.c
	---------------
	Program accepts a 4 letter password
	from the command line as an argument
	and authenticates the user if the 
	password matches the saved password
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int auth(char* code){

	int is_admin = 0;
	
	char buf[4];

	strcpy(buf, code);

	return is_admin;
}

int main(int argc, char* argv[]){

	if(argc != 2) {
		printf("Error: enter password as first argument\n");
		exit(1);
	}

	int admin = auth(argv[1]);

	if(admin){
		printf("Successfully Authenticated\n");
	}
	else {
		printf("ACCESS DENIED!!!\n");	
	}

return 0;
}
