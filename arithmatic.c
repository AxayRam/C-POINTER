#include<stdio.h> 


// This program demonstrates pointer arithmetic in C.
void main(){

    char a[3]={'A','B','C'};
    int b[3]={1,2,3};
    short int c[3]={10,20,30};

    char *pa=a;
    int  *pb=&b[0];
    short int *pc=&c[0];

    printf("\n Math on char pointer:\n\n");
     
    printf("pa   =%p\n", pa);
    printf("pa+0 =%p : *(pa+0)=%c ,pa[0]=%c\n",pa+0,*(pa+0),pa[0]) ;
    printf("pa+1 =%p : *(pa+1)=%c ,pa[1]=%c\n",pa+1,*(pa+1),pa[1]) ;
    printf("pa+2 =%p : *(pa+2)=%c ,pa[2]=%c\n",pa+2,*(pa+2),pa[2]) ;

    printf("\n Math on int  pointer:\n\n");
    printf("pb   =%p\n", pb);
    printf("pb+0 =%p : *(pb+0)=%d ,pb[0]=%d\n",pb+0,*(pb+0),pb[0]) ;
    printf("pb+1 =%p : *(pb+1)=%d ,pb[1]=%d\n",pb+1,*(pb+1),pb[1]) ;        
    printf("pb+2 =%p : *(pb+2)=%d ,pb[2]=%d\n",pb+2,*(pb+2),pb[2]) ;

    printf("\n Math on short int pointer:\n\n");
    printf("pc   =%p\n", pc);
    printf("pc+0 =%p : *(pc+0)=%d ,pc[0]=%d\n",pc+0,*(pc+0),pc[0]) ;
    printf("pc+1 =%p : *(pc+1)=%d ,pc[1]=%d\n",pc+1,*(pc+1),pc[1]) ;
    printf("pc+2 =%p : *(pc+2)=%d ,pc[2]=%d\n",pc+2,*(pc+2),pc[2]) ;
}