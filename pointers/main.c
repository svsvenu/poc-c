/* Pointers programs */

#include<stdio.h>

// malloc functions
#include<stdlib.h>
#include<string.h>
   
void print_char_array(char *c);

void print_2d_array(int number[][2] );

int main() {

   char *c = "venu";
   
   int num[2][2] ;
   
   int (*p)[2] = num;
   
   for (int i=0 ; i<2; i++ ){
   
   		for (int j=0; j<2; j++ ) {
   		
   			num[i][j] = 0;
   			
   		}
   		
   }
 // print the character array  
   print_char_array (c);
   
   print_2d_array( num );
           
}

// prints the character array by incrementing the pointer 
// and dereferencing it till it hits the end of string character
void print_char_array(char *c ){

	while ( *c != '\0' ){
	
		printf("%c", *c);
				
		c++;
	
	}

}

// prints a 2d array, the method argument should have the column
// specified ahead of time so that the pointer arithmetic can be done right
void print_2d_array(int number[][2] ){

	printf ("Address of 0'th is %p\n", number );
	
	printf ("Value at 0th pointer is %d\n", **number );
	
	printf ("Address of 1st pointer is %p\n", number + 1 );

}