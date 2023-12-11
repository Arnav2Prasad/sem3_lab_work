#include <stdio.h>


int main(){
        int arr[10];

        printf("Enter elements (10 elements): \n");
        for (int i=0;i<10;i++){
                scanf("%d",&arr[i]);
        }

        int sum=0;
        for (int i=0;i<10;i++){
                sum+=arr[i]*arr[i];
        }

        printf("Sum : %d\n",sum);

	return 0;
}
