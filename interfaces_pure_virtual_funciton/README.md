# 接口（纯虚函数）

## 概念
在基类中定义一个没有实现的函数，强制子类去实现该函数，通常叫做接口。类的接口只包含未实现的方法，作为模板。由于这个接口类实际上并不包含方法实现，因此我们不可能实例化那个类。

## 示例
```c++
class Entity
{
public:
    virtual std::string GetName() = 0;
};
```
使用`virtual`定义纯虚函数。纯虚函数没有方法体，右侧等于0。因此如果你想使用它，就必须在一个子类中实现它。
```c++
class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
    std::string GetName() override { return m_Name; }
};

int main()
{
    Player* p = new Player("Cherno");
    return 0;
}
```
而且你不能实例化`Entity`类，下面这种做法是无法通过编译的。
```c++
Entity* e = new Entity();
```

接下来，我们看另外一个例子，假设我们要编写一个函数来打印这些类的类名。

我们可以先定义一个接口类`Printable`
```c++
class Printable
{
public:
    virtual std::string GetClassName() = 0;
};
```

在`Printable`类中提供了`GetClassName`纯虚函数。然后我们可以定义`Print`函数来打印类名。`Print`函数接受一个类指针(这里写的`Printable`， 因为它保证了类中含有`GetClassName`这个函数，后面我们会在`Printable`的子类中重写`GetClassName`来返回该子类的类名，所以必须保证`GetClassName`存在)。

```c++
void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;
}
```

然后我们定义两个类`Entity`和`Player`。
```c++
class Entity : public Printable
{
public:
    std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
public:
    std::string GetClassName() override { return "Player"; }
};
```
`Entity`继承`Printable`，`Player`继承`Entity`。因此这两个子类都含有`GetClassName`函数。

我们可以在`main`函数中测试一下
```c++
int main()
{
    Entity* e = new Entity();
    Print(e);
    Player* p = new Player();
    Print(p);
    return 0;
}
```
结果输出
```
Entity
Player
```
如果将`Player`类中重写的`GetClassName`函数注释掉, 或`Player`类与`Entity`类相同：
```c++
class Player : public Entity {};
```
结果输出:
```
Entity
Entity
```
即重写的`GetClassName`也将被继承。

我可以定义任何一个类，通过重写`GetClassName`函数来打印类名
```c++
class A : public Printable
{
    std::string GetClassName() override { return "A"; }
};

int main(){
    Print(new A());
    return 0;
}
```

