#include <stdio.h>

int main(){
        char a;
        printf("Enter a character : ");
        scanf("%c",&a);

        if (a>='a' && a<='z'){
		printf("Its a character\n");
	}
	else if(a>='A' && a<='Z'){
		printf("Its a character\n");
	}
        else{
		printf("Its not a character\n");

        }
        return 0;
}
