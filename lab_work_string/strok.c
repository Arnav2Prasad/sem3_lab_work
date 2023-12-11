#include<stdio.h>

void strtok(char*,char);

void strtok(char* s,char ch){
    int i=0;
    while(s[i]!='\0'){
        printf("Token : ");
        while(s[i]!=ch && s[i]!='\0'){
            printf("%c",s[i]);
            i++;
        }
        printf("\n");
        if(s[i]!='\0'){
	       	i++;
	}
    }
    return;
}
int main(){
    char string[100];
    printf("Enter the string: ");
    fgets(string,100,stdin);

    char ch;
    printf("Enter the token seperator: ");
    scanf("%c",&ch);

    strtok(string,ch);

    return 0;
}
