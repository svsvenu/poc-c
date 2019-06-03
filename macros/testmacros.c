#include<stdio.h>
#include<stdlib.h>

#define generic_malloc( TYPE) (   malloc ( sizeof( typeof(TYPE)   )   ) )          
        
        
int main(){

int i = 0;

struct test_s {
int i;
int j;
float k;

};

struct test_s2 {
int i;
int j;
int p;
float k;

};

struct test_s test ;

test.i = 0;
test.j =0;

struct test_s *test2;

// test2 = generic_malloc(test);

printf ("This is test marcos %d", test2->i);
}