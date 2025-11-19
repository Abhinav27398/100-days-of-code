#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person details
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select gender (1 = MALE, 2 = FEMALE, 3 = OTHER): ");
    scanf("%d", &p.gender);

    // Print details
    printf("\nName: %s\n", p.name);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
        default:     printf("Invalid gender\n"); break;
    }

    return 0;
}
