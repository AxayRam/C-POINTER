// Dangling Pointer after free use


#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(0);

  printf("before: %d\n",*p);
  *p = 4;
  printf("after: %d\n",*p);
  printf("Address of p: %p\n",(void*)p);
  free(p); 

  *p = 5; // This line is unsafe, as p may be NULL or point to freed memory
  printf("after free: %d\n", *p);
  printf("Address of p: %p\n", (void *)p);
  return 0;
}