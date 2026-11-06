#include <print>

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
    std::println("hawawa");

    int num = 427; //변수
    std::println("{0}", num); //포맷팅

    //자료형 추론
    auto var = 2;
    std::println("{}", var);

    //cpp 문자열
    std::string str = "abcde";
    std::println("{}", str);

    const int x = 4; // 상수 키워드

    //구조체 변수
    y sty = {2, 3};
    sty.j;
    std::println("{0}", sty.j);

    // 포인터 <- 좀 어려움
    const int * ptr = &x;
    std::println("{}", *ptr);
    //ptr 주소로 방문해 값을 출력

    //함수에 인자를 전달해 호출
    std::println("{}", fn_add(1, 2));

    //클래스 변수 == 인스턴스
    A inst;
    std::println("{}", inst.method1());

    //동적 메모리 포인터
    int* dyptr = new int;
    *dyptr = 1;

    //역참조 연산자
    std::println("{}", (void*)dyptr);
    std::println("dyptr's address = {}", (void*)dyptr); //dyptr이 가리키는 주소 값 출력

    //참조 연산자
    std::println("dyptr = {}", (void*)&dyptr); //dyptr의 주소 값 출력
    std::println("dyptr = {}", **&dyptr); //dyptr의 주소 값 -> dyptr의 값 -> dyptr가 가리키는 주소의 값  출력

    delete dyptr;

    dyptr = nullptr;
}
