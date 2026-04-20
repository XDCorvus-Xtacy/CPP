/*
3. char[12] 배열 메모리를 new 연산자로 동적 할당하고 해제하는 코드 예를 작성하세요.
*/

#include <iostream>

int main(void)
{
    char *arr = new char[12];

    for (int i = 0; i < 12; i++)
    {
        arr[i] = i;
        std::cout << (int)arr[i] << std::endl;
    }

    delete[] arr;
    return 0;
}