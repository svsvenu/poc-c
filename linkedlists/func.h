#include <stdio.h>
//The structure that we will be playing with, populating, deleting etc
struct student {

            int id;
            char name[20];
            float percentage;
            struct student *next;
            
} student_struct; 
void print_list(struct student *student_ptr);
