#include <stdio.h>
#include <stdlib.h>

typedef struct data{
	char name;
	struct data* p;
}data;

int main(){
	data a,b,c;
	a.p=b.p;
	b.p=c.p;
	c.p=a.p;

	return 0;
}
