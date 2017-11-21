/* Linked lists program */

#include<stdio.h>

// malloc functions
#include<stdlib.h>

struct student {

            int id;
            char name[20];
            float percentage;
            struct student *next;
            
} student_struct; 
    
void populate_list();

void print_list(struct student *student_ptr);

void remove_from_list(struct student *student_ptr, int id);


int main() {

   populate_list(); 
        
   printf ("List populated");
   
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
	
	remove_from_list(student_ptr_head, 0);
	
	print_list(student_ptr_head);

	
}

void print_list(struct student *student_ptr) {
		   	
		while (student_ptr->next != NULL) {
		
				   	printf ( " Id is %d \n", student_ptr->id );
				   	
				   	student_ptr = student_ptr->next;

		}
	   
}

void remove_from_list(struct student *student_ptr, int id) {

		struct student *head = student_ptr;
		
		struct student **indirect_head = &head;
		
		while ( student_ptr->next != NULL ){
			
				if ( student_ptr->id == id ){
					
					printf ("Match id %d \n", id);
					
					*indirect_head = student_ptr->next;
					
					break;
					
				
				}
				
				else {
				
					printf ("Found id %d ", student_ptr->id);

				}
				
				student_ptr = student_ptr->next;
				
				indirect_head = &(*indirect_head)->next;
		
		}
		
		
}