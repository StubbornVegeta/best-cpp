#include <iostream>
int main()
{
    int example[5];
    int* ptr = example;
    //example[0] = 2;
    //example[4] = 4;

    //int a = example[0];
    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }

    //example[-1] = 1;
    //example[5] = 3;

    example[2] =  5;
    std::cout << example[2] << std::endl;
    *((char*)ptr + 8) = 6;
    std::cout << example[2] << std::endl;
    *(int*)((char*)ptr + 8) = 12888;
    std::cout << example[2] << std::endl;

    return 0;
}
