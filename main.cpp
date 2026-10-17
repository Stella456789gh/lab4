#include <iostream>
#include "holiday.h"
#include "dayOfYear.h"
// 4. main.cpp: 테스트 (추가)
// 1의 본인이름학번의 네임스페이스 안에 
// 비멤버함수 compareDayOfYear 정의: 
// 매개변수는 const dayOfYear 참조형 2개, 
// 매개변수 멤버들이 모두 같은지를 비교
namespace KwonMinSung2693018
{
    bool compareDayOfYear(const dayOfYear& d1,const dayOfYear& d2)
    {
        return d1.getMonth() == d2.getMonth() && d1.getDay() == d2.getDay();
    }
}

int main()
{
// holiday 객체1 선언, print함수 호출
// holiday 객체2 초기값을 넣어서 선언, print함수 호출
// 비멤버함수 compareDayOfYear을 호출하여 
// 그 리턴값이 true면 same, false면 not same을 표준스트림으로 출력
    using namespace KwonMinSung2693018;

    holiday h1{};
    h1.print();
    holiday h2{dayOfYear{12,25}, true};
    h2.print();

    if (compareDayOfYear(h1.getDate(),h2.getDate()))
        std::cout << "same\n";
    else
        std::cout << "not same\n";

        return 0;
}