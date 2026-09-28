#include "quiz6.h"
#include <iostream>

int main(){
    quiz6 q(2, 2, 4);
    quiz6 r = 3 + q;
    std::cout << r << std::endl;

    quiz6 a(1, 2, 3); 
    quiz6 b(6);       
    quiz6 c(1, 1, 6); 

    std::cout << (a == c) << std::endl; 
    std::cout << (a == b) << std::endl;

    quiz6 d;
    quiz6 e(5);
    quiz6 f(1, 2, 3);

    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    return 0;
}

