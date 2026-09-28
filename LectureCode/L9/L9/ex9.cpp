#include <iostream>
#include <vector>


void in_s(std::vector<int> & v){
    int count = 0;
    for(int i = 1; i < v.size(); i++){
        int tmp = v[i];
        int j = i-1;
        for(; j >= 0 && ++count && tmp < v[j]; j--){
            v[j+1] = v[j];
        }
        v[j+1] = tmp;
    }
    std::cout << count << std::endl;
}

int main(){
    unsigned c = 5; //0..0101
    unsigned d = 19;//0..010011
    std::cout << c << std::endl;
    c = c << 2; //0..010100 // c*2^2
    std::cout << c << std::endl;
    c = c >> 3; //0..010 // c*2^2
    std::cout << c << std::endl;
    std::vector<int> v = {1,2,3,4,5};
    std::cout << (c & d) << std::endl;
    int x;
    std::cout << "enter a number" << std::endl;
    
    std::cin >> x;
    if(x & 1){
        std::cout << "ODD" << std::endl;
    }else{
       std::cout << "EVEN" << std::endl;
    }
    std::cout << (c | 1) << std::endl;

    //in_s(v);

}