#include <iostream>
#include <cctype>
#include <ctime>
#include <cmath>


int main(){
    srand(time(0));
    int x;
    std::string str = "hello";
    std::cout << "Enter an int" << std::endl;
    std::cin >> x;
    
    if(x > 5)
    {
        std::cout << "greater";
    }else if(x == 5){
        std::cout << "eqaul";
    }else{
        std::cout << "lesser";
    }
    while(x >= 0){
        std::cout << x << std::endl;
        x--;
    }
    do{
        std::cout << x++ << std::endl;
   
    }while(x < 6);
    
    for(int i = 0, j = 5; i < 5; i++, j--){
        std::cout << i << " " << j << std::endl;
    }
    std::string str2 = str;
    for(char & c : str){
        c = toupper(c); 
        std::cout << c;
    }
    std::cout << "\n" << str2 << std::endl;
    for(int i = 0 ; i < 5; i++){
   
        std::cout << rand() << std::endl;
    }
    //-+/*%
    int y = 3;
    double d = y/static_cast<double>(x);
    d = pow(3,7);
    return 0;
}