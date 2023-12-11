#include <stdio.h>

int main(){
        char a;
        printf("Enter a character : ");
        scanf("%c",&a);

        if (a>='a' || a=='e' || a=='i' || a=='o' || a=='u'){
                printf("Its a vowel\n");
        }
        else if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
                printf("Its a vowel\n");
        }
        else{
                printf("Its a consonant\n");

        }
        return 0;
}
