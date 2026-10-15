#include <iostream>
#include "stdio.h"

// 구조체
struct y{
    int i;
    int j = 4;
};

//함수
int fn_add(int a, int b){
    return a + b;
}

//클래스, 구조체의 확장 개념
class A{
    //public 키워드 밑으로 전부 public
    public:
    int var1;

    int method1(){
        this->var1 = 3;

        return this->var1;
    }
    //클래스 내의 변수를 속성, 함수를 메소드라 칭한다.
};

//메인 함수
int main(){
    // 출력
    std::cout << "hawawa" << std::endl;

    int num = 427; //변수
    std::cout << num << std::endl;

    //자료형 추론
    auto var = 2;
    std::cout << var << std::endl;

    //cpp 문자열
    std::string str = "abcde";
    std::cout << str << std::endl;

    const int x = 4; // 상수 키워드

    //구조체 변수
    y sty = {2, 3};
    sty.j;

    std::cout << sty.j << std::endl;

    // 포인터 <- 좀 어려움
    const int * ptr = &x;
    std::cout << *ptr << std::endl;

    std::cout << fn_add(1, 2) << std::endl;

    //클래스 변수
    A inst;
    std::cout << inst.method1() << std::endl;

    //동적 메모리 포인터
    int* dyptr = new int;
    *dyptr = 1;

    //역참조 연산자
    std::cout << *dyptr << std::endl;
    printf("var2's address = %p\n", dyptr); //var2가 가리키는 주소 값 출력

    //참조 연산자
    printf("var2 = %p\n", &dyptr); //var2의 주소 값 출력
    printf("var2 = %d\n", **&dyptr); //var2의 주소 값 -> var2의 값 -> var2가 가리키는 주소의 값  출력

    delete dyptr;

    dyptr = nullptr;
}
