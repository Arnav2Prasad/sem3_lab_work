#include<stdio.h>
#define macro 5
int main(){
    int t,temp;
    char d;
    int a[macro];
    printf("Enter direction of rotation: ");
    scanf("%c",&d);
    printf("Enter number of rotations: ");
    scanf("%d",&t);
    printf("Enter array elements(5 elements): ");
    for(int i=0;i<macro;i++){
        scanf("%d",&a[i]);
    }
    if(d=='l'){
        for(int i=0;i<t;i++){
            temp=a[0];
            for(int j=0;j<macro-1;j++){
                a[j]=a[j+1];
            }
            a[macro-1]=temp;
        }
    }
    else if(d=='r'){
        for(int i=0;i<t;i++){
            temp=a[macro-1];
            for(int j=macro-1;j>0;j--){
                a[j]=a[j-1];
            }
            a[0]=temp;
        }
    }
    else printf("Invalid"); 
    printf("After shifting the array is: ");
    for(int i=0;i<macro;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
 return 0;
} 
   
