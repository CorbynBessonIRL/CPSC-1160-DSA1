#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>

class quiz6{
    public:
        //set all values to one
        quiz6();
        // set all values to a same number
        quiz6(int);
        // set x, y, z to the integers that are passed
        quiz6(int, int, int);
        //Return true if the product of the ints in the two QUIZ6 objects are the 
        //same
        bool operator==(const quiz6 &);
        //Will print out the product of all the ints in the object
        friend std::ostream &operator<<(std::ostream &, const quiz6 &);

        // Add a prototype function that will allow this code fragment to work and
        // then implement it.
        // quiz6 q(2,2,4);
        // quiz6 r = 3 + q;
        // std::cout << r << std::endl; //will print 175
        friend quiz6 operator+(int, const quiz6 &);
    private:
        int x;
        int y;
        int z;
};

quiz6::quiz6(){
    x = 1;
    y = 1;
    z = 1;
}

quiz6::quiz6(int a){
    x = a;
    y = a;
    z = a;
}

quiz6::quiz6(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}
bool quiz6::operator==(const quiz6& q){
    return ((x * y * z) == (q.x * q.y * q.z));
}

std::ostream& operator<<(std::ostream& out, const quiz6 & q){
    out << q.x * q.y * q.z;
    return out;
}

quiz6 operator+(int a, const quiz6 &q){
    return quiz6(a + q.x, a + q.y, a + q.z);
}

#endif