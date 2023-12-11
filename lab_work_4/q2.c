#include <stdio.h>

int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);

	if (a>0){
		printf("Positive Number\n");
	}
	else if(a<0){
		printf("Negative Number\n");
	}
	else{
		printf("The number is zero\n");
	}
	return 0;
}
