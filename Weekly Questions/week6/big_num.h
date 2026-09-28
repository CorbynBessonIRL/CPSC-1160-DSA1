#ifndef BIGNUM_H
#define BIGNUM_H
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

class big_num {
   public:
      //should store the string of digits in a vectors
      //should store it in reverse order so the math is easier
      big_num(const std::string &);
      //should print the number remember it is in reverse order 
      print ();
      // should add to big_num objects together
      big_num add(const big_num&) const; 

      //should return the size of the vector
      int size() const;  
   private:
      std::vector<int> digits; // an array of numDigits digits 
};

#endif 