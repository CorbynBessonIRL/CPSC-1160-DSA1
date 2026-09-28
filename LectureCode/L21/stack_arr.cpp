//push add to the top of the stack
//pop remove the top item from the stack
//peek look at the top

#include <vector>
#include <iostream>
const int SIZE = 10;

template <typename T>
struct stack{
    void push( T x){
        arr[top++] = x;
    }
    T pop(){
        if(empty()){
            std::cout << "STACK IS FULL" << std::endl;
            std::exit(1);
        }
        top--;
        return arr[top];
    }

    T peek(){
        if(empty()){
            std::cout << "STACK IS FULL" << std::endl;
            std::exit(1);
        }
        return arr[top-1];
    }

    bool empty(){
       return top == 0;
    }
    private:
        int arr[SIZE];
        int top = 0;

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