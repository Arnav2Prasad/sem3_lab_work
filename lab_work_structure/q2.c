#include <stdio.h>
#include <string.h>

#define MAX_HOTELS 5
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    int grade;
    int numberOfRooms;
    float roomCharges;
} Hotel;

void printHotelsByGrade(Hotel hotels[], int count, int grade) {
    printf("\nHotels in Grade %d:\n", grade);
    for (int i = 0; i < count; i++) {
        if (hotels[i].grade == grade) {
            printf("%s\n", hotels[i].name);
        }
    }
}

void printHotelsWithRoomChargesLessThan(Hotel hotels[], int count, float charge) {
    printf("\nHotels with Room Charges less than %.2f:\n", charge);
    for (int i = 0; i < count; i++) {
        if (hotels[i].roomCharges < charge) {
            printf("%s\n", hotels[i].name);
        }
    }
}

int main() {
    Hotel hotels[MAX_HOTELS] = {
        {"Hotel A", "Address A", 3, 50, 75.0},
        {"Hotel B", "Address B", 4, 60, 90.0},
        {"Hotel C", "Address C", 3, 40, 60.0},
        {"Hotel D", "Address D", 2, 30, 50.0},
        {"Hotel E", "Address E", 4, 45, 85.0}
    };

    int choice;
    printf("Select an operation:\n");
    printf("1. Print hotels in a particular grade\n");
    printf("2. Print hotels with room charges less than specified value\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter the grade: ");
            int grade;
            scanf("%d", &grade);
            printHotelsByGrade(hotels, MAX_HOTELS, grade);
            break;

        case 2:
            printf("\nEnter the maximum room charges: ");
            float maxCharge;
            scanf("%f", &maxCharge);
            printHotelsWithRoomChargesLessThan(hotels, MAX_HOTELS, maxCharge);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
