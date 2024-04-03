#include<stdio.h>
#include<stdlib.h>

int main(void) {
    //이중 포인터 변수 x 선언
    int* *x;
    printf("[----- [한윤수] [2023041004] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    return 0;
}