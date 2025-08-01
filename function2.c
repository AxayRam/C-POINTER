#include<stdio.h> 

void function1(int a){
    printf("function1():a=%d\n",a);

}

void function2(int b){
    printf("function1():b=%d\n",b);
    
}

typedef void (*func_ptr)(int);


int main(){


    // void (*func_ptr)(int);


    // func_ptr=function1;
    // func_ptr(10);


    // func_ptr=function2;
    // func_ptr(20);

  func_ptr pi;


     pi=function1;
    pi(10);


    pi=function2;
    pi(20);














    















    return 0;
}