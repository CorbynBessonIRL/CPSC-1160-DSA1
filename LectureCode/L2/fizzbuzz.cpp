//from the number 1 to 100
// if number % 3 = 0 fizz;
//if number % 5 = 0 buzz;
//if both fizzbuzz;
//else just print number
#include <iostream>

int main(){
    for(int i = 1; i <= 100; i++){
        std::string s;
        if (i% 5 == 0 && i%3 == 0){
            s = "fizzbuzz";
        }else if(i % 3 == 0){
            s = "fizz";
        }else if (i% 5 == 0){
            s = "buzz";
        }else {
            s = std::to_string(i);
        }
        std::cout << s << std::endl;
    }
    return 0;
}