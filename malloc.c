#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(0);

  printf("before: %d\n", *p);
  *p = 4;
  printf("after: %d\n", *p);
  printf("Address of p: %p\n", (void *)p);
  free(p);  // Freeing the allocated memory(400 bytes)
 // printf("after free: %d\n", *p);
 //printf("Address of p: %p\n", (void *)p);
  return 0;
}