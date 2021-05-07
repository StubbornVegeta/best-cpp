#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print(){}
};

int main()
{
    {
        std::weak_ptr<Entity> e1;
        //std::shared_ptr<Entity> e1;
        {
            //std::unique_ptr<Entity> entity(new Entity());
            std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // 可以处理异常
            // std::unique_ptr<Entity> e = entity; 无法复制
            //std::shared_ptr<Entity> ShareEntity(new Entity()); // 2次内存分配，先做一次new Entity的内存分配，然后是shared_ptr的控制内存块的分配
            std::shared_ptr<Entity> ShareEntity = std::make_shared<Entity>();
            //std::shared_ptr<Entity> e1 = ShareEntity;
            e1 = ShareEntity;
            //entity->Print();
        }
    }
    return 0;
}
