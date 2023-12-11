#include <stdio.h>

int main(){
        int arr[10];

        printf("Enter elements : ");
        for (int i=0;i<10;i++){
                scanf("%d",&arr[i]);
        }
        printf("reverse\n");
        for (int i=0;i<10;i++){
                printf("%d ",arr[10-i-1]);
        }
	printf("\n");

        return 0;
}

