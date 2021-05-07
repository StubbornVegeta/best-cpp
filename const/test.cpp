#include <iostream>
#include <string>
class Entity
{
public:
    virtual std::string GetName()
    {
        return "Entity";
    }
};


class Player : public Entity
{
public:
    std::string GetName() override
    {
        return "Player";
    }
};


void PrintName(const Entity& e)
{
    e = Entity();
    std::cout << e.GetName() << std::endl;
}


int main()
{
    Entity e;
    //const Entity& e1=Entity();
    //Player p;
    //e1 = Entity();
    PrintName(e);
    //PrintName(p);
    return 0;
}
