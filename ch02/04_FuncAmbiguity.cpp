#include <iostream>

/*
15번 행을 주석문으로 처리하거나 TestFunc(5, 10)과 같이 두 개로 작성하면 오류가 사라진다.
이는 TestFunc) 함수가 다중 정의되는 것은 문법적으로 문제가 되지 않는다는 뜻이다.
즉, 함수를 만든 제작자는 오류를 경험하지 않지만 함수 사용자는 오류를 경험할 수 있다!
*/

void TestFunc(int a)
{
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10)
{
    std::cout << "TestFunc(int, int)" << std::endl;
}

int main(void)
{
    TestFunc(5);

    return 0;
}