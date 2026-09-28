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
    OS os2;
    os2.insert(5);
    os2.insert(1);
    os2.insert(14);
    os2.insert(4);
    os2.insert(5);
    os2.insert(5);
    std::cout << (os-os2) << std::endl;
}