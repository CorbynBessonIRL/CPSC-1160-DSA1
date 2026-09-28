#include <iostream>
int add(int = 0,int = 0,int = 0);

template <typename T>
void print(const T & a){
    std::cout << a << std::endl;
    return;
}

//write a function that takes in two variable of any type
//and swap them so a will become b and b will become a
template <typename T>
void my_swap(T & a, T & b){
    T tmp = a;
    a = b;
    b = tmp;
}


//write a power function called my_pow that does
//a^b is no b is passed default to 2. assume n is >= 0
int my_pow(int a, int b = 2){
    int prod = 1;
    for(int i = 0; i < b ; i++){
        prod *= a;
    }
    return prod;
}

void min_max(int a, int b, int & min, int &max){
    min = a;
    max = b;
    if(a > b){
        max = a;
        min = b;
    }
}


int main(){
    int a = 7, b = 19;
    int min, max;
    min_max(a,b,min,max);
    std::string str = "hello";
    print(str);
    print(str[0]);
    print(add());
    std::cout << add(3) << std::endl;
    std::cout << add(3,5) << std::endl;
    std::cout << add(3,5,3) << std::endl;
    std::cout << max << " " << min << std::endl;
    std::cout << my_pow(3) << " " << my_pow(3,3) << std::endl;

    return 0;
}
int add(int a, int b, int c){
    return a + b + c;
}
// int add(int a,int b){

//     int result= a +b;
//     return result;
// }