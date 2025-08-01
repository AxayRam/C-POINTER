#include<stdio.h>
int main(){

    char *name_ptr="AXAY";
    char name_array[]="axay";

  /*1. similarity between array amd pointer*/

  // printf("name_ptr :%s\n,name_ptr: %p\n,*name_ptr:%c\n\n\n",name_ptr,name_ptr,*name_ptr);


  // printf("name_array :%s\n,name_array: %p\n,*name_array:%c\n\n\n",name_array,name_array,*name_array);


  /*2. different between arrayand pointer #1*/


  // printf("sizeof(name_ptr) :%lu\n,sizeof(name_arary): %lu\n\n\n",sizeof(name_ptr),sizeof(name_array));

  // int x[]={10,11,12};
  // int *x_ptr=x;
  // printf("sizeof(x_ptr):%lu\n,sizeof(x):%lu\n\n\n",sizeof(x_ptr),sizeof(x));


  /*3. array cananot be ressigned but pointer can be!*/

  int a[]={10,20,30};
  int x;
  a=x;
  int *xptr=a;






    


















    return 0;

}