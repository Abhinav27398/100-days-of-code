#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Output student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
