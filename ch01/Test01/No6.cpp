/*
6. 다음과 같은 int 배열을 오름차순으로 정렬한 후 화면에 결과를 출력하는 프로그램을
작성하세요. 정렬 방법은 상관없습니다.

int aList[5] = {10, 20, 30, 40, 50};

단, 화면에 배열 내용을 출력할 때는 반드시 '범위 기반 for문'을 사용해야 합니다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int aList[5] = {50, 20, 40, 10, 30};

    //오름차순 정렬 => 버블 정렬 활용
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (aList[j] > aList[j+1])
            {
                int nTmp = aList[j];
                aList[j] = aList[j+1];
                aList[j+1] = nTmp;
            }
        }
    }

    //출력
    for (auto n: aList)
        cout << n << ' ';

    return 0;
}