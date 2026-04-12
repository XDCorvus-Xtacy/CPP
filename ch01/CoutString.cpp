#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
    std::string strData = "Test String";
    std::cout << "Sample String" << std::endl;
    std::cout << strData << std::endl;

    strData = "New String";
    std::cout << strData << std::endl;

    std::cout << "저는 " << 20 << "살" << "입니다." << std::endl;

    return 0;
}