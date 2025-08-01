#include<stdio.h>
int main() {


     char a='A';
     int  b=10;
     float c=3.14;
     double d=3.14159265358979323846;

    char *pa=&a; // pointer to char
    int *pb=&b; // pointer to int
    float *pc=&c; // pointer to float
    double *pd=&d; // pointer to double

    printf("sizeof(a):%lu\n", sizeof(a));
    printf("sizeof(b):%lu\n", sizeof(b));
    printf("sizeof(c):%lu\n", sizeof(c));
    printf("sizeof(d):%lu\n", sizeof(d));

    printf("sizeof(*pa):%lu\n", sizeof(*pa));
    printf("sizeof(*pb):%lu\n", sizeof(*pb));
    printf("sizeof(*pc):%lu\n", sizeof(*pc));
    printf("sizeof(*pd):%lu\n", sizeof(*pd));

    *pa ='B'; // change value of a
    *pb = *pb+1;
    *pc = *pc + 1;
    *pd = *pd + 1;
    printf("a:%c\n", a);
    printf("b:%d\n", b);
    printf("c:%f\n", c);
    printf("d:%lf\n", d);




    return 0;
}
//