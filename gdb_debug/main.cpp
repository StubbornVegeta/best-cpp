#include "iostream"

void print(){};

int main()
{
    int a=2;
    int b = 100;
    a = a << 1;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    a++;
    b++;
    std::cout << a << std::endl;
    return 0;
}

