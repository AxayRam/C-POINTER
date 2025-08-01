// malloc fails to allocate memory when the size is 0, but it still returns a valid pointer.

#include <stdio.h>
#include <stdlib.h>


#define REQUEST 1*1024*1024*1024 



int main() {


    for (int i = 0; i <100000000000; i++) {
    // Free the allocated memory
    
    int *p = (int *)malloc(REQUEST);
    printf("p:%p\n", p);
    printf("*p=%d\n",i); // This line is unsafe, as p may be NULL or point to freed memory
    if (p==NULL){
    return -1;
   }

}

  // Freeing the allocated memory(1GB)
  // Freeing the allocated memory(400 bytes)

  return 0;
}