// student.h
#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int roll;
    char name[50];
    int age;
} Student;

void add_student();
void view_students();
void delete_student();
void search_student();

#endif
