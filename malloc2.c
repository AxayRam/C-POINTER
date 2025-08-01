#include <stdio.h>
#include <stdlib.h>


#define REQUEST 1*1024*1024*1024 


//memoty leak example
// memory not free to it is memory leak
int main() {

int *p;

p=(int *)malloc(REQUEST);

printf("p:%p\n", p);
printf("*p=%d\n", *p); // This line is unsafe, as p may be NULL or point to freed memory




return 0;

}