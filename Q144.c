#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure as parameter
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Input data
    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Pass structure to function
    printStudent(s1);

    return 0;
}
