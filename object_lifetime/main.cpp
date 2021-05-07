#include <iostream>

class Entity
{
public:
    Entity()
    {
        std::cout << "create Entity" << std::endl;
    }

    Entity(const std::string& str)
    {
        std::cout << str << std::endl;
    }

    ~Entity()
    {
        std::cout << "delete Entity" << std::endl;
    }

};

// 自动删除new 创建的指针
class ScopedPtr
{
private:
    Entity* m_ptr;
public:
    ScopedPtr(Entity* ptr)
        :m_ptr(ptr)
    {
    }
    ~ScopedPtr()
    {
        delete m_ptr;
    }
};


int main()
{
    {
        //ScopedPtr e(new Entity("hello"));
        ScopedPtr e = new Entity("hello"); // 隐式转换
        //Entity* e = new Entity();
    }
    return 0;
}
