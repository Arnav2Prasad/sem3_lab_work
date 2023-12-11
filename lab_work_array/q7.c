#include <stdio.h>

void removeDuplicates(int a[], int *length) {
    for (int i = 0; i < *length; i++) {
        for (int j = i + 1; j < *length;) {
            if (a[i] == a[j]) {
                for (int k = j; k < *length - 1; k++) {
                    a[k] = a[k + 1];
                }
                (*length)--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int a[] = {4, 2, 8, 3, 6, 4, 8, 2, 7, 5};
    int length = sizeof(a) / sizeof(a[0]);

    printf("Original array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }

    removeDuplicates(a, &length);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
