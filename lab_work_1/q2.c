#include <stdio.h>

void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
	return;
}

int main(){
	int a=10;
	int b=20;

	printf("Values Before Swapping\n");
	printf("a : %d\n",a);
	printf("b : %d\n",b);

	swap(&a,&b);

	printf("Values After Swapping\n");
        printf("a : %d\n",a);
        printf("b : %d\n",b);

	return 0;
}

