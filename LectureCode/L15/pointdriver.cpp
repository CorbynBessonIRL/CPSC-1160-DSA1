#include <iostream>
#include "point.h"

point f(point w){
    return w;
}

int main(){
    point p;
    point q(3,4);
    point r(5,12);
    r.update_y(100);
    std::cout << p << " " << q << std::endl;
    {
        point w = p;
    }
    q = p;
    p = p;

}