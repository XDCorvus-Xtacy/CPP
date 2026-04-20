/*
2. C++11에서 auto 예약어는 어떤 의미인지 쓰고 코드로 예를 보이세요.
*/

//auto는 "초깃값의 형식에 맞춰 선언하는 인스턴스의 형식이 
//'자동'으로 결정되는 예약어"이다.

#include <iostream>
using namespace std;

int main(void)
{
    int a = 10;
    int b = a;
    auto c = b;

    cout << a + b + c << endl;

    return 0;
}