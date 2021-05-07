#include <iostream>
#include <string>

class Entity
{
//private:
//protected:
public:
    int X, Y;

    void Print(){};
public:
    Entity()
    {
        X = 0;
    }
};

class Player : public Entity
{
    public:
        Player()
        {
            X= 0;
            Print();
        }

};

int main()
{
    Entity e;
    e.X = 2;

    return 0;
}
