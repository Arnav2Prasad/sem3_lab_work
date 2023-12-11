#include<stdio.h>
#include<stdlib.h>
#define macro 10
int main(){
    int a[macro];
    for(int i=0;i<macro;i++){
        a[i]=rand()%(51)+50;
        printf("%d\n",a[i]);
    }  
    return 0;
}
