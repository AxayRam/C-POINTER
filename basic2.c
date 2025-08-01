#include<stdio.h>
int main() {
   
  int i=10;
  int *pi= &i;   
  int **ppi= &pi;   // poiter to pointer   i is a variable, pi is a pointer to i, ppi is a pointer to pi
 
    int ***pppi= &ppi;   // pppi is a pointer to ppi, which is a pointer to pi, which is a pointer to i

  printf("i:%d\n,&i:%p\n,*&i:%d\n,*&*&i=%d\n,*&*&*&i=%d\n", i, &i, *&i, *&*&i,
         *&*&*&i);

   printf("\n\n\n");


printf(" %p\n %p\n %p\n %p\n\n", &i, pi, ppi, pppi);


printf(" %p\n %p\n %p\n %p\n", &i, &pi, &ppi,&pppi);



    return 0;
}

/*   *& to cut itsetlf *& value is null */