#include <iostream>
#include <vector>
/*
5!
5*4*3*2*1

5*4!
  4*3!
    3*2!
      2*1!
        1
       2*1 = 2
    3*2 = 6
  4*6 = 24
5*24 = 120

f(n) = n*f(n-1)
f(1) = 1
*/
void print(int n){
    if(n == 0){
        return;
    }
    std::cout << n << " ";
    print(n-1);
}

void print_a(int n){
    if(n == 0){
        return;
    }
    print_a(n-1);
    std::cout << n << " ";
    
}
int fac(int n){
    if(n == 1){
        return 1;
    }
    return n * fac(n-1);
}

//my_pow return a^b assume b >= 0
/*
3^4
3*3^3
  3*3^2
    3*3^1
      3*3^0
        1
f(a,0) = 1
f(a,n) = a*f(a,n-1)
*/
int my_pow(int a, int b){
    if(b == 0){
        return 1;
    }
    return a*my_pow(a,b-1);
}

//low = 0;
//high = str.size()-1
/*
raceecar
l     h
 l   h
  l h
   m
*/
bool is_pali(const std::string & str,int low,int high){
    if(low >= high){
        return true;
    }
    if(str[low] != str[high]){
        return false;
    }
    return is_pali(str,low+1,high-1);
}
bool is_pali(const std::string & str){
    return is_pali(str,0,str.size()-1);
}

int main(){
    std::string str = "racecar";
    std::cout << fac(5) << std::endl;
    print(5);
    std::cout << std::endl;
    print_a(5);
    std::cout << std::endl;
    std::cout << is_pali(str) << std::endl;
    return 0;
}