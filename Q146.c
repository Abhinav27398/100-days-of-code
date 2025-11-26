#include <stdio.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure
struct Employee {
    int emp_id;
    char name[50];
    float salary;
    struct Date joinDate;   // nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", 
          &emp.joinDate.day,
          &emp.joinDate.month,
          &emp.joinDate.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joinDate.day,
           emp.joinDate.month,
           emp.joinDate.year);

    return 0;
}
