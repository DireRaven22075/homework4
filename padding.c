#include <stdio.h>
//구조체 사이즈 19바이트
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main(void) {
    struct student pst;
    printf("[----- [한윤수] [2023041004] -----]\n");
    //구조체 크기 출력 (24바이트)
    printf("size of student = %ld\n", sizeof(struct student));
    //정수형 크기 출력 (4바이트)
    printf("size of int = %ld\n", sizeof(int));
    //short형 크기 출력 (2바이트)
    printf("size of short = %ld\n", sizeof(short));

    //구조체의 원할한 사용을 위해 padding을 통해 24바이트로 맞춤
    //24바이트 = 8바이트 * 3
    
    return 0;
}