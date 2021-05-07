#include <iostream>
//#include <string>


class Entity
{
private:
    int m_X, m_Y;
    mutable int var;
public:
    int GetX() const
    {
        var = 2;
        return m_X;
    }
};

void PrintEntity(const Entity& e)
{
    std::cout << e.GetX() << std::endl;
}
int main()
{
    const int MAX = 5;
    int* a = new int;
    //const int* a = new int;
    //int const* a = new int;
    //int* const a = new int;
    //const int* const a = new int;
    a = (int*)&MAX;
    *a = 100;
    std::cout << "MAX:\t"      << MAX   << std::endl;
    return 0;
}
