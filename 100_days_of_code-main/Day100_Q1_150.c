#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;  // pointer points to structure

    // Input
    printf("Enter name, roll, marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Output
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", ptr->name, ptr->roll, ptr->marks);

    return 0;
}