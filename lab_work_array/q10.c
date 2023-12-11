#include<stdio.h>
#define macro 10
int main(){
	int flag;
	int a[macro];

	printf("Enter the array elements(10 elements): ");
	for(int i=0;i<macro;i++){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<macro/2;i++){
		if(a[i]==a[macro-1-i]){
		       	flag=1;
		}
		else {
			flag=0;
			break;
		}
	}
	if(flag==1){
	       	printf("Elements of array are same it read from front or back.\n");
	}
	else{
	       	printf("Elements of array are not same it read from front or back.\n");
	}

	return 0;}
