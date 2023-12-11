#include<stdio.h>
#include<stdlib.h>
#define macro 100
int main(){
    int n=0;
    int a2[macro];
    int a1[macro];
    for(int i=0;i<macro;i++){
        int temp=rand()%1000+1;
        a1[i]=temp;
        if(temp%8==0 || temp%15==0){
            a2[n]=temp;
            n+=1;
        }
    }
    printf("Orignal List: ");
    for(int i=0;i<macro;i++){
        printf("%d ",a1[i]);
    }
    printf("\n");
    printf("----------\n");
    printf("New List: ");
    for(int i=0;i<n;i++){
        printf("%d ",a2[i]);
    }
    printf("\n");
    return 0;
}
