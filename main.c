/* Hello World program */

#include<stdio.h>
#include "venulib.h" 

int main() 
{
    
  /*  struct student 
{
            int id;
            char name[20];
            float percentage;
} record; */
    
    struct student record;
    
    struct student *rec_ptr;
    
  // void (*funcPtr) (int ) ;
    
    funcPtr fp =  print_message;
    
    fp(30); 
    
int *p;
    
    MYINT k = 10;
     
    /*
while(1) {
    int inc=1024*1024*sizeof(char);
    p=(int*) calloc(1,inc);
    if(!p) break;
    }
    
    */
    
    
    s record1;
    
    record1.id = 2;
    
                record.id=1;

    
    int i = 10;
    
    int *ip = &i;
    
    printf("Hello World\n");
    
   // printf ("Pointer is %d\n", ip);
    
    printf ("Pointer is %d\n", *ip);

    printf ("Student record id %d\n", record1.id);

    
    
    print_message(10);

}
