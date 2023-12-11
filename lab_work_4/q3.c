#include <stdio.h>

int main(){
        int a;
        printf("Enter a number : ");
        scanf("%d",&a);

        if (a%5==0 && a%11==0){
                printf("the number %d is divisible by both 5 and 11\n",a);
        }
        else if(a%5==0){
                printf("the number %d is divisible by only 5\n",a);
        }
	else if(a%11==0){
                printf("the number %d is divisible by only 11\n",a);
	}
        else{
                printf("the number %d is not divisible by both 5 and 11\n",a);

        }
        return 0;
}

