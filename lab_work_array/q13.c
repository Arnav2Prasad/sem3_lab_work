#include <stdio.h>
int main() {
    int a[5];
    int b[5];
    printf("Enter elements of array 1(5 elements) : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of array 2: ");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    int c[10];
    int x=0;
    int y=0;
    int p=0;
    while(p!=10){
        if(a[x]<b[y] && x!=5 && y!=5){
            c[p]=a[x];
            x+=1;
            p+=1; }
        else{
            c[p]=b[y];
            y+=1;
            p+=1;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}
