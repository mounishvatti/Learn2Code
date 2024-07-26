#include <stdio.h>

/*
int - 4 bytes
char - 1 byte
double - 8 bytes
float - 4 bytes
long double - 16 bytes

pointer - 4 bytes
*/

int main(){

    int a = 1025;
    int *p;
    p = &a; 
    printf("Size of integer = %d\n", sizeof(int));
    printf("Address = %d and value = %d\n", p, *p);
    printf("Address = %d and value = %d\n", p+1, *(p+1));

    printf("\n");

    char *c;
    c = (char*)p;
    printf("Size of char = %d\n", sizeof(char));
    printf("Address = %d and value = %d\n", c, *c);
    printf("Address = %d and value = %d\n", c+1, *(c+1));

    printf("\n");

    void *v;
    v = p;
    printf("Size of void = %d\n", sizeof(void));
    printf("Address = %d\n", v);
    printf("Address = %d\n", v+1);

    printf("\n");
    return 0;
}