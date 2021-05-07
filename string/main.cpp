#include <iostream>
//#include <stdio.h>

//#include <string>


void function(const std::string& string)
{
    std::cout << string << std::endl;
}

int main()
{
    //std::string name3 = "Cherno";
    //name3 += " hello";

    std::string name3 = std::string("Cherno") + " hello";
    bool contains = name3.find("no") != std::string::npos;

    std::cout << contains << std::endl;

    //char* name = "Cher\0no";
    //char name2[7] = {'C', 'h', 'e',0 , 'r', 'n', 'o' };

    //std::cout << a << std::endl;
    //std::cout << l << std::endl;
    std::cout << name3 << std::endl;

    function("hello ");
    return 0;

}
