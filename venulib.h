void print_message(int a) ;

struct student  
{
            int id;
            char name[20];
            float percentage;
} ;

typedef struct student s;

typedef void (*funcPtr) (int ) ;

typedef int MYINT; 