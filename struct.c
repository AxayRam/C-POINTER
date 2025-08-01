#include<stdio.h>



struct my_struct {
     int a;
     char b;
     float c;
};

void main(){

    struct my_struct var={
       .a=1024,
       .b='A',
       .c=3.14,
    };
    printf("var.a: %d\n", var.a);
    printf("var.b: %c\n", var.b);
    printf("var.c: %f\n", var.c);

    struct my_struct *ptr = &var;

    (*ptr).a = (*ptr).a+1;
    (*ptr).b = (*ptr).b + 1; // Incrementing char 'A' will result in 'B'
    (*ptr).c = (*ptr).c + 1;
   




    printf("(*ptr).a: %d\n",(*ptr).a);
    printf("(*ptr).b: %c\n",(*ptr).b);
    printf("(*ptr).c: %f\n",(*ptr).c);

    ptr->a = ptr->a + 1;
    ptr->b = ptr->b + 1; // Incrementing char 'B' will result in 'C'
    ptr->c = ptr->c + 1;

    printf("ptr->a: %d\n",ptr->a);
    printf("ptr->b: %c\n",ptr->b);
    printf("ptr->c: %f\n",ptr->c);
    printf("Size of struct my_struct: %zu bytes\n", sizeof(struct my_struct)); 
   
     
    printf("(*ptr).a: %d\n",(*ptr).a);
    printf("(*ptr).b: %c\n",(*ptr).b);
    printf("(*ptr).c: %f\n",(*ptr).c);

    
    printf("var.a: %d\n", var.a);
    printf("var.b: %c\n", var.b);
    printf("var.c: %f\n", var.c);

}

