#include <stdio.h>

int main(){
        int a;
        printf("Enter a number : ");
        scanf("%d",&a);

        if (a%100==0 ){
		if (a%400==0){
                	printf("Leap Year\n");
		}
		else{
			printf("Non-Leap year\n");
        	}
	}
        else{
                if (a%4==0){
                        printf("Leap Year\n");
                }
                else{
                        printf("Non-Leap year\n");
        	}

        }
        return 0;
}
