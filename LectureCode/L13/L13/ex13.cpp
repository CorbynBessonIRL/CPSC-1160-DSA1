#include <iostream>
struct thing{
    int x, y;
    void print(){
        std::cout << x << " " << y << std::endl;
    }
};
void swap(int & a, int & b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int *f(){ // VERY BAD
    int a = 8;
    return &a;
}
int *gf(){
    int * a = new int(8);
    return a;
}

int main(){
    int *p,a,b;
    int &r = a;
    p = &a;
    a = 14;
    std::cout << a << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = 42;
    std::cout << a << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    p = &b;
    swap(a,b);
    swap(&a,&b);
    {
        int *p = new int;
        *p = 5;
        delete p;
    }
    p = new int(7);
    int *q = new int (9);

    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    delete p;
    p = q;
    std::cout << q << std::endl;
    delete q;
    std::cout << q << std::endl;
    p = q = nullptr;
    //std::cout << *p << std::endl;
    p = gf();
    *p = 90;
    std::cout << *p << std::endl;
    f();
    thing* t = new thing;
    t->x = 8;
    (*t).y = 10;
    t->print();
    delete t;
    t = nullptr;
}

