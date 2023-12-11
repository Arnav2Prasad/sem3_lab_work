#include <stdio.h>

int main() {
    int a[20];
    int p[20];
    int n[20];
    int e[20];
    int o[20];
    int z[20];
    int q=0,r=0,s=0,t=0,u=0;
    printf("Enter the array elements(20 elements): ");
    for(int i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<20;i++){
        if(a[i]>0){
            p[q]=a[i];
            q+=1;
            if(a[i]%2==0){
            e[s]=a[i];
            s+=1;
        }
            else{
                o[t]=a[i];
                t+=1;
        }
        }
        else if(a[i]<0){
            n[r]=a[i];
            r+=1;
        }
        if(a[i]==0){
            z[u]=a[i];
            u+=1;
        }
    }
    for(int i=0;i<q;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    for(int i=0;i<r;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    for(int i=0;i<s;i++){
        printf("%d ",e[i]);
    }
    printf("\n");
    for(int i=0;i<t;i++){
        printf("%d ",o[i]);
    }
    printf("\n");
    for(int i=0;i<u;i++){
        printf("%d ",z[i]);
    }
    printf("\n");
    return 0;
}
