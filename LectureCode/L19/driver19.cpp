#include "ordered_set.h"
#include <iostream>

int main(){
    OS os;
    os.insert(5);
    os.insert(3);
    os.insert(37);
    os.insert(4);
    os.insert(5);
    os.insert(5);
    std::cout << os << std::endl;
}