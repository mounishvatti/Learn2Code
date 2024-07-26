#include <stdio.h>

int main(){

    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("Address = %d and value = %d\n", p, *p);
    printf("Address = %d and value = %d\n", q, *q);
    printf("Address = %d and value = %d\n", r, *r);

    printf("\n");

    printf("%d\n", *(*q)); // dereferencing -> value at the address
    printf("%d\n", *(*r)); // dereferencing ->  address of 
    printf("%d\n", *(*(*r))); // dereferencing -> value at the address


    return 0;
}