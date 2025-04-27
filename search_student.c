// search_student.c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void search_student() {
    int roll, found = 0;
    Student s;
    FILE *fp = fopen("students.txt", "rb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll == roll) {
            printf("\nStudent Found:\n");
            printf("Roll: %d\nName: %s\nAge: %d\n", s.roll, s.name, s.age);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student with Roll %d not found.\n", roll);

    fclose(fp);
}