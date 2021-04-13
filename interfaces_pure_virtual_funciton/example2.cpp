#include <iostream>
#include <string>

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    std::string GetClassName() override { return "Entity"; }
};

//class Player : public Entity {};
class Player : public Entity
{
public:
    std::string GetClassName() override { return "Player"; }
};

void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;
}

class A : public Printable
{
    std::string GetClassName() override { return "A"; }
};


int main()
{
    Entity* e = new Entity();
    Print(e);

    Player* p = new Player();
    Print(p);

    Print(new A());
    return 0;
}
