#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student *)malloc(sizeof(struct Student));

    // Check if memory allocation was successful
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
