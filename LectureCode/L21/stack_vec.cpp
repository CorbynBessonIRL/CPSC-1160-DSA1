//push add to the top of the stack
//pop remove the top item from the stack
//peek look at the top
#include <vector>
#include <iostream>
template <typename T>
struct stack{
    void push( T x){
        vec.push_back(x);
    }
    T pop(){
        if(vec.empty()){
            std::cout << "STACK IT EMPTY";
            std::exit(1);
        }
        T ret = vec.back();
        vec.pop_back();
        return ret;
    }

    T peek(){
        if(vec.empty()){
            std::cout << "STACK IT EMPTY";
            std::exit(1);
        }
        return vec.back();
    }

    bool empty(){
        return vec.empty();
    }
    private:
        std::vector<T> vec;

};

int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    std::cout << s.pop() << std::endl;

    s.push(5);
    s.push(3);
    s.push(1);
    s.push(14);
    while(!s.empty()){
        std::cout << s.pop() << std::endl;
    }

}