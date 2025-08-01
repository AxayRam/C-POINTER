#include<stdio.h> 
void function1(){
 printf("FUNCTION 1!\n");
}

void function2(){
printf("FUNCTION 2!\n");
}


void main(){


    void (*func_ptr)();
    

    func_ptr = function1;
    func_ptr();

    func_ptr = function2;
    func_ptr();






}