#include <iostream>
#include "point.h"


int main(){
    point p;
    std::cout << p.to_string() << std::endl;
    p.set_X(14);
    std::cout << p.to_string() << std::endl;
    point q(5);
    std::cout << q.to_string() << std::endl;
    point r(6,7);
    point j(6,7);
    std::cout << r.to_string() << std::endl;
    std::cout << (r == q) << std::endl;
    std::cout << (r == j) << std::endl;
    std::cout << (r.operator==(j)) << std::endl;
    std::cout << r << std::endl; //operator<<(std::cout,r);

}