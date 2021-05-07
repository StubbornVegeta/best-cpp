#include <iostream>

class Example
{
private:
    std::string m_Name;
public:
    Example()
    {
        m_Name = std::string("example");
        std::cout << m_Name << std::endl;
    }
    Example(const std::string& name)
    {
        std::cout << name << std::endl;
    }

};

class Entity
{
private:
    std::string m_Name;
    Example m_Example;
public:
    Entity()
        : m_Name("Unknown"), m_Example("vegeta")
    {}
    //Entity()
    //{
        //m_Name = std::string("Unknown");
        ////std::cout << m_Name << std::endl;
        //m_Example = Example("vegeta");
    //}
    Entity(const std::string& name)
    {
        std::cout << name << std::endl;
    }
};


int main()
{
    Entity e;
    return 0;
}
