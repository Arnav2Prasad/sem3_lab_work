#include <stdio.h>

int main(){
        char a;
        printf("Enter a character : ");
        scanf("%c",&a);


	if (a>='a' && a<='z'){
		printf("Lower case alphabet\n");
	}
	else if(a>='A' && a<='Z'){
		printf("Upper case alphabet\n");
	}
        else{
                printf("Character not an alphabet\n");
        }
        return 0;
}    
