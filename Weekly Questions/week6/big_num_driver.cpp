#include <iostream>
#include <cstdlib>
#include <string>
#include "big_num.h"


int main() {
   std::string str;
   std::cout << "Enter a number: ";
   getline(std::cin,str);
   big_num x(str);
   std::cout << "Enter a number: ";
   getline(std::cin,str);
   big_num y(str);
   big_num result = x.add(y);
   x.print();
   std::cout  <<"  +  ";
   y.print() 
   std::cout << " = "; 
   result.print();
   std::cout << std::endl;
   return 0;
}
   
