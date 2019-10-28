#include <stdio.h>
#include <unistd.h>

int main(){
	char* name[2];

	int uid = getuid();

	printf("This process runs with uid %d\n", uid);	

	name[0] = "/bin/sh";
	name[1] = NULL;

	execve(name[0], name, NULL);
}
