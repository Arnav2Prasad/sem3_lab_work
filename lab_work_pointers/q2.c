#include <stdio.h>
#include <stdlib.h>

typedef struct data{
	char name;
	struct data* p;
}data;

int main(){
	//struct data* p=a.p;
	data a,b,c;
	struct data* p=a.p;
	a.p=b.p;
	b.p=c.p;
	c.p=a.p;

	return 0;
}
