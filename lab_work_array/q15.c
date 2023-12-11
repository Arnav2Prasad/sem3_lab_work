#include <stdio.h>
#define macro 10
int main() {
    int a[macro];
    printf("Enter the Array elements(10) : ");
    for(int i=0;i<macro;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=1;i<=macro;i++){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Second Largest element: %d\n",a[macro-2]);

    return 0;
}
