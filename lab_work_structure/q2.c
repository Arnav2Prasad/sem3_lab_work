#include <stdio.h>

// Typedefs for readability
typedef struct {
    int day;
    int month;
    int year;
} DateOfBirth;

typedef struct {
    float english;
    float mathematics;
    float computerScience;
} Marks;

typedef struct {
    char firstName[50];
    char middleName[50];
    char lastName[50];
} Name;

typedef struct {
    Name name;
    char rollNumber[20];
    char gender;
    DateOfBirth dob;
    Marks marks;
} Student;

// Function to calculate the aggregate percentage
float calculateAggregate(const Marks* marks) {
    return (marks->english + marks->mathematics + marks->computerScience) / 3.0;
}

// Function to display student details
void displayStudentDetails(const Student* student) {
    printf("\nStudent Details\n");
    printf("Name: %s %s %s\n", student->name.firstName, student->name.middleName, student->name.lastName);
    printf("Roll Number: %s\n", student->rollNumber);
    printf("Gender: %c\n", student->gender);
    printf("Date of Birth: %d/%d/%d\n", student->dob.day, student->dob.month, student->dob.year);
    printf("Marks - English: %.2f, Mathematics: %.2f, Computer Science: %.2f\n",
           student->marks.english, student->marks.mathematics, student->marks.computerScience);
}

int main() {
    // Sample data for three students
    Student students[3] = {
        {{"John", "", "Doe"}, "S001", 'M', {1, 5, 2000}, {80, 75, 90}},
        {{"Jane", "Ann", "Smith"}, "S002", 'F', {15, 8, 2001}, {60, 45, 50}},
        {{"Alice", "Eve", "Johnson"}, "S003", 'F', {10, 12, 1999}, {30, 40, 35}},
    };

    // Get user input for the name to search
    char searchName[50];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    // Display details of the student with the entered name
    int found = 0;
    for (int i = 0; i < 3; ++i) {
        if (strcmp(students[i].name.firstName, searchName) == 0 ||
            strcmp(students[i].name.middleName, searchName) == 0 ||
            strcmp(students[i].name.lastName, searchName) == 0) {
            displayStudentDetails(&students[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }

    // Display students with less than 40% aggregate
    printf("\nStudents with less than 40%% aggregate:\n");
    for (int i = 0; i < 3; ++i) {
        float aggregate = calculateAggregate(&students[i].marks);
        if (aggregate < 40.0) {
            printf("%s %s %s - Aggregate: %.2f%%\n",
                   students[i].name.firstName, students[i].name.middleName, students[i].name.lastName, aggregate);
        }
    }

    return 0;
}
