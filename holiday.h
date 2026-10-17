#pragma once
#include "dayOfYear.h"
// 3. 클래스2.h: 클래스2 정의 (추가)
// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: dayOfyear형 객체, bool형 멤버변수 1개 이상
namespace KwonMinSung2693018
{
class holiday
{
private:
    dayOfYear date{};
    bool parkingEnforcement{};

// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정

public:  
    holiday(dayOfYear d = dayOfYear{1,1}, bool p = false)
        :date{d}, parkingEnforcement{p}
    {}
// -print: 표준스트림출력으로 멤버변수들 출력
// 클래스1형 객체의 접근함수를 참조형식으로 구현
    void print() const
    {
        date.print();
        if (parkingEnforcement) 
            std::cout << "Parking will be allowed!" << std::endl;
        else 
            std::cout << "Parking will not be allowed!" << std::endl;
    }
    const dayOfYear& getDate() const {return date;}

    void setDate(dayOfYear& d){date = d;}
};


}
