#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
struct point{
    int x = rand()%101;
    int y = rand()%101;

    void print(){
        std::cout<< "( " << x << "," << y << " )" << std::endl;
    }
    point mid_point(const point & p){
        point r = {(x+p.x)/2, (p.y+y)/2 };
        return r;
    }
    //get the distance between the point and p
    double dist(const point & p) const{
        return sqrt(pow(x-p.x,2) +pow(y-p.y,2));
    }
};

//return the index of the point in  v that is the closest to p
int closest (const std::vector<point> & v, const point & p){
    int closest = 0;
    for(unsigned i = 1; i < v.size() ; i++){
        if(v[closest].dist(p) > v[i].dist(p)){
            closest = i;
        }
    }
    return closest;
}

void set_point(point&p, int x , int y){
    p.x = x;
    p.y = y;
}
point mid_point(const point & p, const point & q){
    point r = {(p.x+q.x)/2, (p.y+q.y)/2 };
    return r;
}
int main(){
    srand(time(0));
    point p;
    p.x = 7;
    p.y = 19;
    std::cout << p.x << " " << p.y << std::endl;
    point q = {-6,4};
    std::cout << q.x << " " << q.y << std::endl;
    p = q;
    point r = p.mid_point(q);
    std::vector<point> v(10);
    point og = {0,0};
    for(auto wombat : v){
        wombat.print();
        std::cout << (wombat.dist(og)) << std::endl;
    }
    
}