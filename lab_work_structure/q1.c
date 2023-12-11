#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int english;
    int mathematics;
    int computerScience;
} Marks;

typedef struct {
    int rollNumber;
    char firstName[50];
    char middleName[50];
    char lastName[50];
    char gender;
    Date dateOfBirth;
    Marks marks;
} Student;

float calculateAggregate(Marks marks) {
    return (marks.english + marks.mathematics + marks.computerScience) / 3.0;
}

void displayStudentDetails(Student student) {
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s %s %s\n", student.firstName, student.middleName, student.lastName);
    printf("Gender: %c\n", student.gender);
    printf("Date of Birth: %d-%d-%d\n", student.dateOfBirth.day, student.dateOfBirth.month, student.dateOfBirth.year);
    printf("Marks - English: %d, Mathematics: %d, Computer Science: %d\n", 
           student.marks.english, student.marks.mathematics, student.marks.computerScience);
}

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("First Name: ");
        scanf("%s", students[i].firstName);
        printf("Middle Name: ");
        scanf("%s", students[i].middleName);
        printf("Last Name: ");
        scanf("%s", students[i].lastName);
        printf("Gender: ");
        scanf(" %c", &students[i].gender);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &students[i].dateOfBirth.day, &students[i].dateOfBirth.month, &students[i].dateOfBirth.year);
        printf("Marks in English, Mathematics, Computer Science: ");
        scanf("%d %d %d", &students[i].marks.english, &students[i].marks.mathematics, &students[i].marks.computerScience);
    }

    char searchName[50];
    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < 5; i++) {
        if (strcmp(searchName, students[i].firstName) == 0 ||
            strcmp(searchName, students[i].middleName) == 0 ||
            strcmp(searchName, students[i].lastName) == 0) {
            printf("\nStudent details:\n");
            displayStudentDetails(students[i]);
            break;
        }
    }

    printf("\nStudents who scored less than 40%% of the aggregate:\n");
    for (int i = 0; i < 5; i++) {
        float aggregate = calculateAggregate(students[i].marks);
        if (aggregate < 40.0) {
            printf("%s %s %s (Average Marks: %.2f)\n", 
                   students[i].firstName, students[i].middleName, students[i].lastName, aggregate);
        }
    }

    return 0;
}
