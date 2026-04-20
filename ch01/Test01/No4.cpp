/*
4. int에 대한 참조 형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하세요.
함수 원형은 void Swap(int &a, int &b)입니다.
*/
#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int nTmp;
    nTmp = a;
    a = b;
    b = nTmp;
}

int main(void)
{
    int x = 5, y = 10;

    Swap(x, y);

    cout << "x: " << x << endl << "y: " << y << endl;

    return 0;
}