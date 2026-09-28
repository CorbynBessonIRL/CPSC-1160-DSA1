#include <iostream>
#include <cctype>

int main(){
    int x = 297,y;
    std::string str = "hello";
    str += " world";
    str += std::to_string(x);
    std::cout << "hello world " << x << std::endl;
    std::cout << "My name is ryan" << std::endl;
    std::cout << str << std::endl;
    str[0] = 'H';
    str.at(4) = '0';
    std::cout << str.size() << std::endl;
    char c = 'a';
    tolower(c);
    //std::cout << "Enter a int" << std::endl;
    //std::cin >> x >> str;
    //std::cout << "You entered " << x << " " << str << std::endl;
    std::cout << "Enter your name" << std::endl;
    //sstr;
    getline(std::cin,str);
    std::cout << "Hello " << str;
    return 0;
}