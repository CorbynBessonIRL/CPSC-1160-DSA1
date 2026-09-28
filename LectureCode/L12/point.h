#ifndef POINT_H
#define POINT_H 
#include <iostream>

class point{
    public:
        point();
        point(int a);
        point(int a,int b);
        std::string to_string();
        void set_X(int a);
        bool operator==(const point & p);
        friend std::ostream& operator<<(std::ostream& out, const point & p);
    private:
        int x;
        int y;
};

point::point(){
    x = rand()%101;
    y = rand()%101;
}
point::point(int a){
    x=y=a;
}
point::point(int a,int b){
    x=a;
    y = b;
}
std::string point::to_string(){
    std::string str = "( ";
    str += std::to_string(x) + " , ";
    str += std::to_string(y) + " )";
    return str;
}
void point::set_X(int a){
    x = a;
}

bool point::operator==(const point & p){
    return x == p.x && y == p.y;
}

std::ostream& operator<<(std::ostream& out, const point & p){
    out << "( " << p.x << " , " << p.y << " ) ";
    return out;
}

#endif