#include <stdio.h>

int main(){
	int a,b;

	printf("Enter 2 numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);

	if (a>b){
		printf("%d is bigger than %d\n",a,b);
	}
	else if(a<b){
		printf("%d is bigger than %d\n",b,a);
	}
	else{
		printf("Both numbers are equal %d\n",a);
	}
	return 0;
}
