#include <stdio.h>

int occ(char* arr,char ch){
	int i=0;
	int counter=0;
	while (arr[counter] != '\0'){
		if (arr[counter]==ch){
			i++;
		}
		counter++;
	}
	return i;
}

int main(){
	char arr[]="arnav prasad";
	printf("enter the character to be analyzed : ");
	char ch;
	scanf("%c",&ch);

	printf("%c is there in %s : %d times\n",ch,arr,occ(arr,ch));

	return 0;
}
