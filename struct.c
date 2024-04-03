#include <stdio.h>
//구조체 선언 방법 1
struct student1 {
    char lastName;
    int studentId;
    char grade;
};
//구조체 선언 방법 2
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;
int main(void) {
    //구조체 변수 선언
    struct student1 st1 = {'A', 100, 'A'};
    printf("[----- [한윤수] [2023041004] -----]\n");
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    //구조체 변수 선언
    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    //구조체 변수 선언
    student2 st3;
    //대입 연산자를 이용한 구조체 변수 값 대입
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    //구조체 비교 != 직접 비교
    //구조체 비교 == 각 멤버별 비교
    if((st3.lastName == st2.lastName) && (st3.grade == st2.grade) && (st3.studentId == st2.studentId))
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}