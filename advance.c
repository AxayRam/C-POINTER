#include<stdio.h>

int main() {
 
    int i= 0xAA;
    char c=3;


    int x;
    char *cptr;

    printf("\n");
    printf("&c= %p\n",&c);
    printf("(garba) x=%d\n",x);
    printf("(garba) cptr=%p\n",cptr);
    printf("(garba) cptr=0x%llx \n",(long long unsigned int)cptr);
    printf(" &cptr=%p\n\n\n",&cptr);


/* 1. use of & before the veriable in non-pointer assignment(bit wise and opreation )*/
    //x=i &c;
    //printf("x=i &c -> %d\n",x);

  
/* 2. use of & before the variable in non-pointer assignment */


//    cptr=&c;
//    x=i & cptr;
//    printf("x=i & &c -> %d\n\n",x);
//    x=i & &c;
//     printf("x=i & &c-> %d\n\n",x);
      
    // i=0xff;
    // x = i & (int)(&c);     // bitwise AND operation
    // printf("x=i & (int)(&c) -> %x\n",x);

/* 3. assign pointer a valid address*/

    // cptr=&c;
    // printf("cptr=%p\n &c =%p\n", cptr,&c);
    // printf("&cptr=%p\n", &cptr);

/*4. the use of * with a pointer variable */
    // i =2;
    // x=i * cptr;
    // printf("x=i * cptr -> %d\n", x);


/*5. the use of * with a pointer variable*/
    
    cptr=&c;  // assign pointer a valid address
    printf("cptr=%p\n &c =%p\n", cptr, &c);
    
//    cptr=&c;
//     x=i * (*cptr);
//     printf("x=i * (*cptr) -> %d\n", x);



/*6. the use of * with a pointer variable */

   i=2;
   x=i ** cptr;
   printf("x=i ** cptr -> %d\n", x);
  
    return 0;
  }