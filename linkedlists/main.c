/* Linked lists programs */

#include<stdio.h>

// malloc functions
#include<stdlib.h>


//The structure that we will be playing with, populating, deleting etc
struct student {

            int id;
            char name[20];
            float percentage;
            struct student *next;
            
} student_struct; 
    
void populate_list();

void print_list(struct student *student_ptr);

void remove_from_list(struct student **student_ptr, int id);

int main() {

   populate_list(); 
           
}

void populate_list() {

	int list_size = 5;
	 
	 struct student *student_ptr, *student_ptr_head;
	 	 			 
	 student_ptr = malloc(sizeof(student_struct));
	 
	 student_ptr_head = student_ptr;
	 
	 student_ptr->id = 0;

	for (int i= 1; i<list_size; i++ ){

// Update the current record with the address of the next record	
		student_ptr->next = malloc(sizeof(student_struct));

// point to the next record
         student_ptr = student_ptr->next;
                  
         student_ptr->id = i;
	
	}
	
	print_list(student_ptr_head); 
	
	remove_from_list(&student_ptr_head, 50);
	
	print_list(student_ptr_head);

}

void print_list(struct student *student_ptr) {
		   	
		while (student_ptr->next != NULL) {
		
				   	printf ( " Id is %d \n", student_ptr->id );
				   	
				   	student_ptr = student_ptr->next;

		}
	   
}

void remove_from_list(struct student **indirect_head, int id) {		
		
		while ( (*indirect_head)->next != NULL ){
			
				if ( (*indirect_head)->id == id ){
					
					*indirect_head = (*indirect_head)->next;
					
					printf ("Removed id %d \n", id);

					break;
					
				
				}

				 indirect_head = &(*indirect_head)->next;

		}	
		
}