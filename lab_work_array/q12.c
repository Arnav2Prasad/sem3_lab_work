#include <stdio.h>
#define m 10

int main() {
    int a[m];
    printf("Enter 10 elements for the array : ");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    int num,d,c1=0,c2=0;
    printf("Enter the element: ");
    scanf("%d",&num);
    int temp[m];
    for(int i=0;i<m;i++){
        int d=num-a[i];
        if(d<0) d*=(-1);
        temp[i]=d;
    }
    int max=temp[0];
    int min=temp[0];
    for(int i=0;i<m;i++){
        if(max<temp[i]){
            max=temp[i];
            c1=i;
        }
        if(min>temp[i]){
            min=temp[i];
            c2=i;
        }
        
    }
    printf("Farthest element to the number: %d\n",a[c1]);
    printf("Closest element to the number: %d\n",a[c2]);
    return 0;
}
