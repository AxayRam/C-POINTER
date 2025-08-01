#include<stdio.h>
int main() {
   
  int i=10;

   printf("i:%d\n,&i:%p\n,*&i:%d\n,*&*&i=%d\n,*&*&*&i=%d\n", i, &i, *&i,*&*&i,
          *&*&*&i);

     printf("\n");

    *&*&*&i=20;
 printf("i:%d\n,&i:%p\n,*&i:%d\n,*&*&i=%d\n,*&*&*&i=%d\n", i, &i, *&i,*&*&i,
          *&*&*&i);







    return 0;
}