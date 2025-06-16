// add_student.c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void add_student() {
    Student s;
    FILE *fp = fopen("students.txt", "ab"); // append in binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Roll Number: ");
    printf("Enter USN: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name); // Read full line including spaces
    printf("Enter Age: ");
    scanf("%d", &s.age);

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    
    printf("Student added successfully!\n");
}
