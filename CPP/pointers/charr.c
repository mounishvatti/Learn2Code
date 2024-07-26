#include<stdio.h>
#include<string.h>

int main(){
    char c[] = "abcde";

    char *charPtr = c;
    
    printf("%p:%c\n", charPtr, *charPtr);
    printf("%p:%c\n", charPtr+1, *(charPtr + 1));
    printf("%p:%c\n", charPtr+2, *(charPtr + 2));
    printf("%p:%c\n", charPtr+3, *(charPtr + 3));
    printf("%p:%c\n", charPtr+4, *(charPtr + 4));

    return 0;
}