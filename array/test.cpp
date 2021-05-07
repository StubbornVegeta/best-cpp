#include <iostream>

int* function1()
{
    int example[5];
    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }
    return example;
};



int* function2()
{
    int* example = new int[5];
    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }
    return example;
}


int main()
{
    int* example = function2();
    std::cout << *example << std::endl;
    delete[] example;
    return 0;
}
