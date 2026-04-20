/*
5. 상수형 참조가 기존의 참조 형식과 크게 다른 점이 무엇인지 답하세요.
*/

//1. 참조한 값을 수정할 수 있는지 여부
//2. 임시값(temporary)을 받을 수 있는지 여부

#include <iostream>
using namespace std;

// 일반 참조
void Change(int &a)
{
    a = 100;
}

// 상수 참조
void Print(const int &a)
{
    cout << "const reference value: " << a << endl;
}

int main()
{
    int x = 10;

    cout << "Before Change: " << x << endl;

    Change(x);   // 일반 참조 → 값 변경 가능

    cout << "After Change: " << x << endl << endl;

    Print(x);    // const reference → 읽기만 가능

    Print(20);   // const reference → 임시값 전달 가능

    // 일반 참조는 임시값을 받을 수 없음
    // Change(30);  // ❌ 컴파일 오류

    return 0;
}