/*
1. 자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고, 20살입니다."라고
출력하는 프로그램을 작성하세요. 단, 반드시 std::cout, std::cin을 이용해
작성합니다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    char nName[64];
    int nAge;

    cout << "이름을 입력하세요: ";
    cin >> nName;
    
    cout << "나이를 입력하세요: ";
    cin >> nAge;

    cout << "나의 이름은 " << nName << "이고, " << nAge << "살입니다." 
    << endl;

    return 0;
}