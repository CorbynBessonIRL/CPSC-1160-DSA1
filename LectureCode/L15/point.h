#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>

class point{
    public:
        point();
        point(int,int);
        void update_y(int);
        friend std::ostream& operator <<(  std::ostream&, const point&);
        double dist(const point &) const;

        point(const point&);
        const point& operator=(const point &);
        ~point();
        
    private:
        int x;
        int *y;
        
};

point::~point(){
    delete y;
}

const point& point::operator=(const point & rhs){
    if(this != &rhs){
        delete y;
        x= rhs.x;
        y = new int(*rhs.y);
    }
    return *this;
}

point::point(const point& rhs){
    x= rhs.x;
    y = new int(*rhs.y);
}
point::point(){
    x = 0;
    y = new int(0);
}
point::point(int a, int b){
    x = a;6
    y = new int(b);
}

std::ostream& operator <<(std::ostream& out, const point& rhs){

    out << "(" << rhs.x;
    out << ',' << *rhs.y << ")";
    return out;
}

void point::update_y(int a){
    *y =  a;
}

double point::dist(const point& p) const{ 
    return sqrt(pow(x-p.x,2) + pow(*y - *p.y,2));

}

#endif