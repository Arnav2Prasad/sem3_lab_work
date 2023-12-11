#include <stdio.h>

float area(float r){
	return 3.14*r*r;
}

int main(){
	float r;
	printf("Enter radius for the circle : ");
	scanf("%f",&r);

	printf("Area of the cricle of radius %f is : %f\n",r,area(r));

	return 0;
}
