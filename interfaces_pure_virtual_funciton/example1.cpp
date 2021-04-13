#include <iostream>
#include <string>


class Entity
{
public:
    virtual std::string GetName() = 0;
};


class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
    std::string GetName() override { return m_Name; }
};


void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
};

int main()
{
    Entity* e = new Player("");
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    return 0;
}
