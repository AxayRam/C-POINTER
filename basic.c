#include<stdio.h>
int main(){
    
   char c='a';
   char *c_ptr=&c;


    
    printf("Address of character: %p\n",c_ptr);
    printf("Address of character variable: %p\n",&c);
    printf("address of charecter a: %c \n",c);
    printf("Address of character: %p\n",&c_ptr);
    printf("Fetch the data from *c_ptr to char c address =: %c\n", *c_ptr);
    printf("\n\n\n");
    


return 0;
}