#include <iostream>
//#include <cstring>

int main()
{
    //"Cherno";
    using namespace std::string_literals;

    std::string name0 = "Cherno"s + " hello";
    std::wstring string0 = L"Cherno"s + L" hello";
    std::u16string string1 = u"Cherno"s + u" hello";
    std::u32string string2 = U"Cherno"s + U" hello";

    const char* name = "Cherno";        // 1 byte
    //char name[] = "Cherno";
    const wchar_t* name2 = L"Cherno";  //变动的值

    const char16_t* name3 = u"Cherno";  // 2 byte
    const char32_t* name4 = U"Cherno";  // 4 byte
    std::cout << "wchar_t: " << sizeof(wchar_t) << std::endl;
    std::cout << "char16_t: " << sizeof(char16_t) << std::endl;

    const char* example = R"(Cherno
hello)";

    const char* ex ="Cherno\n"
    "hello\n";


    //name[2] = 'a';
    std::cout << name << std::endl;
    std::cout << example << std::endl;
    std::cout << ex << std::endl;
    return 0;
}
