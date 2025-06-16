// main.c
#include <stdio.h>
#include "student.h"

int main() {
    int choice;
    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Delete Student\n");
        printf("4. Search Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add_student(); break;
            case 2: view_students(); break;
            case 3: delete_student(); break;
            case 4: search_student(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 5);
    printf("Hello World");
    return 0;
}
