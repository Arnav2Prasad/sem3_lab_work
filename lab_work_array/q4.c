#include <stdio.h>

void triangle(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%-4d", arr[j]); 
        }
        printf("\n");
    }
}

int main() {
    int A[] = {60, 700, 80, 900, 10};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Output:\n");
    triangle(A, n);

    return 0;
}

