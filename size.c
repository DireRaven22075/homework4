#include<stdio.h>
#include<stdlib.h>

int main(void) {
    //이중 포인터 변수 x 선언
    int* *x;
    printf("[----- [한윤수] [2023041004] -----]\n");
    //이중 포인터 변수 x의 사이즈 출력 (8바이트)
    printf("sizeof(x) = %lu\n", sizeof(x));
    //이중 포인터 변수 x의 1차 참조의 사이즈 출력 (8바이트)
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    //이중 포인터 변수 x의 2차 참조의 사이즈 출력 (4바이트)
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    return 0;
}