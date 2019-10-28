#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};

int main(){

	struct point* p = (struct point*)malloc(sizeof(struct point));
	p->x = 10;
	p->y = 5;

	printf("p = (%d, %d)\n", p->x, p->y);
	
return 0;
}
