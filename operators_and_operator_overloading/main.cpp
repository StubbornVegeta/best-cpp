#include <iostream>
#include <string>

struct Vector2
{
    float x,y;
    Vector2(float x, float y)
        : x(x), y(y) {}

    Vector2 add(const Vector2& other) const
    {
        return Vector2(x+other.x, y+other.y);
    }

    Vector2 operator+(const Vector2& other) const
    {
        return add(other);
    }

    Vector2 multiply(const Vector2& other) const
    {
        return Vector2(x*other.x, y*other.y);
    }

    Vector2 operator*(const Vector2& other) const
    {
        return multiply(other);
    }

    bool operator==(const Vector2& other) const
    {
        return x==other.x && y==other.y;
    }

    bool operator!=(const Vector2& other) const
    {
        return !(*this == other);
    }

};


std::ostream& operator<< (std::ostream& stream, const Vector2& other)
{
    stream << other.x << ", " << other.y;
    return stream;
}


int main()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(2.0f, 3.0f);
    Vector2 powerup(1.1f, 1.2f);
    //Vector2 newpos = position.add(speed);
    //Vector2 newpos1 = position + speed;
    Vector2 newspeed = speed * powerup;
    std::cout << newspeed << std::endl;
    //std::cout << newspeed.x << ", " << newspeed.y << std::endl;
    //std::cout << newpos1.x << ',' << newpos1.y << std::endl;
    
    Vector2 v1(1,2);
    Vector2 v2(1,1);

    std::cout << (v1 != v2);

    return 0;
}
