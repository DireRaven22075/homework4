#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int* *x;
    printf("[----- [한윤수] [2023041004] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    return 0;
}