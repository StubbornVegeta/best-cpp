#include <iostream>

class Entity
{
public:
    virtual const char* GetName()
    {
        return "e";
    }
};


class Player : public Entity
{
public:
    const char* GetName() override
    {
        return "Player";
    }
};

void PrintName(Entity& ine)
{
    Player p;
    ine = p;

    //std::cout << sizeof(p) << std::endl;
    //std::cout << sizeof(e) << std::endl;
    std::cout << typeid(ine).name() << std::endl;
    //std::cout << &p << ", " << &ine << std::endl;

    //std::cout << (ine).GetName() << std::endl;
}


int main()
{
    int a = 5;
    // int* b = &a;
    // std::cout << *b << std::endl;
    int& ref = a;
    ref = 2;
    std::cout << ref << std::endl;
    std::cout << a << std::endl;


    Entity e;
    Player p;
    Entity& e1 =  p;

    e1 = e;

    std::cout << typeid(e1).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;

    //std::cout << e.GetName() << std::endl;
    //std::cout << e1.GetName() << std::endl;
    //std::cout << p.GetName() << std::endl;

    //std::cout << "e2 type:" << std::endl;
    //PrintName(e2);
    //std::cout << e1.GetName() << std::endl;

    return 0;
}
