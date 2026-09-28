#include <iostream>
#include "stack.h"
int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    std::cout << s.pop() << std::endl;

    s.push(5);
    s.push(3);
    s.push(1);
    s.push(14);
    while(!s.empty()){
        std::cout << s.pop() << std::endl;
    }

}