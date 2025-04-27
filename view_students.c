//view_students.c
#include <stdio.h>
#include <stdlib.h>
#include"student.h"

void view_students(){
    Student s;
    FILE *fp=fopen("students.txt","rb");
    if(fp==NULL){
        printf("Error opening file or no students found!\n");
        return;
    }

    printf("\n---- Student List ----\n");
    while(fread(&s,sizeof(Student),1,fp)){
        printf("Roll: %d\nName: %s\nAge: %d\n",s.roll,s.name,s.age);
    }

    fclose(fp);
}