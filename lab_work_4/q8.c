#include <stdio.h>

int main(){
        char a;
        printf("Enter a character : ");
        scanf("%c",&a);

        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
                printf("Its a vowel\n");
        }
	else if(a>='1' && a<='9'){
		printf("Its a number\n");
	}
        else{
                printf("Its a special character\n");

        }
        return 0;
}
    
