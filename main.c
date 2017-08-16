/* Hello World program test*/

#include<stdio.h>
#include "venulib.h"


int main()
{
    
    struct student 
{
            int id;
            char name[20];
            float percentage;
} record;
    
                record.id=1;

    
    int i = 10;
    
    int *ip = &i;
    
    printf("Hello World\n");
    
    printf ("Pointer is %d\n", ip);
    
     printf ("Pointer is %d\n", *ip);

    printf ("Student record id %d\n", record.id);

    
    
    print_message(10);

}
