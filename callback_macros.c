#include <stdio.h>
#include <stdlib.h>

// pointer to function
//void (*foo)(int)
void print_cb(int a);
void print_cb(int a){
    int c = 5;
    printf("hello #%d\n",a);
    printf("c:%d\n",c);
}

typedef void(*p_f)(int a);


#define def_eu_cell(__FUN, __NUM) \
void __FUN##_##__NUM(void); \ /* function declaration */
void __FUN##_##__NUM(void){ __FUN(__NUM);}

def_eu_cell(print_cb,1)
def_eu_cell(print_cb,2)


int main()
{
   //printf("Hello world!\n");
    print_cb_1();
    print_cb_2();

    return 0;
}

