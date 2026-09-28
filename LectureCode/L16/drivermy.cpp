#include <iostream>
#include "my_vector.h"

int main(){
    my_vector<char> cmv;
    my_vector<int> imv(5);
    cmv.append('a');
    cmv.append('b');
    for(int i = 0; i < cmv.len(); i++){
        std::cout << cmv[i] << " ";
    }
    std::cout << std::endl;
    imv[3] = 6;
    imv.append(7);
    for(int i = 0; i < imv.len(); i++){
        std::cout << imv[i] << " ";
    }
    std::cout << std::endl;

}