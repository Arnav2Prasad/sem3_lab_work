#include <stdio.h>
#include <stdlib.h>

struct Hotel{
    char name[100];
    char address[200];
    int grade;
    int numberOfRooms;
    float roomCharges;
};

void printHotelsByGrade(struct Hotel hotels[], int numHotels, int targetGrade) {
    printf("\nHotels in Grade %d:\n", targetGrade);
    for (int i = 0; i < numHotels; i++) {
        if (hotels[i].grade == targetGrade) {
            printf("%s\n", hotels[i].name);
        }
    }
}

void printHotelsByRoomCharges(struct Hotel hotels[], int numHotels, float maxRoomCharges) {
    printf("\nHotels with Room Charges less than %.2f:\n", maxRoomCharges);
    for (int i = 0; i < numHotels; i++) {
        if (hotels[i].roomCharges < maxRoomCharges) {
            printf("%s\n", hotels[i].name);
        }
    }
}

int main() {
    const int numHotels = 3;

    struct Hotel hotels[3] = {
        {"Hotel A", "123 Main St, City A", 3, 50, 80.0},
        {"Hotel B", "456 Oak St, City B", 4, 75, 120.0},
        {"Hotel C", "789 Pine St, City C", 3, 60, 90.5}
    };

    printHotelsByGrade(hotels, numHotels, 3);

    printHotelsByRoomCharges(hotels, numHotels, 100.0);

    return 0;
}

