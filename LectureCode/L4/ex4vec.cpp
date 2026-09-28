#include <iostream>
#include <vector>
void print(const std::vector<std::vector<int>> &M  ){
    for(int r = 0; r < M.size();r++){
        for(int c = 0; c < M[r].size(); c++){
            std::cout << M[r][c] << " ";
        }
        std::cout << std::endl;
    }
}

//write a function to is passed in an vector and make a reverse copy of the vector.
// std::vector<double> reverse(const std::vector<double> & v){
//     std::vector<double> r(v.size());
//     for(int i = 0; i < v.size();i++){
//         r[i] = v[v.size()-1-i];
//     }
//     return r;
// }
std::vector<double> reverse( std::vector<double> v){
    for(int i = 0; i < v.size()/2;i++){
        double tmp = v[i];
        v[i] = v[v.size()-1-i];
        v[v.size()-1-i] = tmp;
    }
    return v ;
}

template <typename T>
void print(const std::vector<T>& v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<double> v(5,3);
    std::vector<double> w = {1,2,3,4,5};
    v[4] = 34;
    v.push_back(5);
    v.resize(8,32);
    w = reverse(v);
    print(v);
    print(w);
    //std::vector<std::vector<int>> m(3,std::vector<int>(4));
    std::vector<std::vector<int>> m;
    m.push_back(std::vector<int>(1));
    m.push_back(std::vector<int>(2));
    m.push_back(std::vector<int>(3));
    print(m);
}