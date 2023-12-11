#include<stdio.h>
#define macro 10

int main(){
    int a[macro];
    int temp;
    printf("Enter the array elements(10 elements): ");
    for(int i=0;i<macro;i++){
        scanf("%d",&a[i]);
    }

    printf("Orignal list: ");
    for(int i=0;i<macro;i++){
        printf("%d ",a[i]);
    }
    
    printf("\n");

    int start=0;
    int end=macro-1;
    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
	start++;
	end--;
    }

    printf("Reversed list: ");
    for(int i=0;i<macro;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
