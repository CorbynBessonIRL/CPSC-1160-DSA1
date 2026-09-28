//This program will test if an int is odd or even
#include <iostream>

int main(){
    int x;
    std::string str = "ODD";
    std::cout << "enter a int" << std::endl;
    std::cin >> x;
    if(x%2 == 0){
        str = "EVEN";
    }
    std::cout << str << std::endl;
    
    
    return 0;
}