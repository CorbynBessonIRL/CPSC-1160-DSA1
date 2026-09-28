#ifndef STACK_H
#define STACK_H

template <typename T>
class stack{
    public:
        stack();
        void push(T);
        T pop();
        T peek();
        bool empty();

        //too lazy for the memory functions see OS class for those
    private:
        struct node{
            T data;
            node * next;
        };
        node* head;
};

template <typename T>
stack<T>::stack(){
    head = nullptr;
}

template <typename T>
void stack<T>::push(T x){
    head = new node{x, head};
}
template <typename T>
T stack<T>::pop(){
    if(empty()){
        std::cout << "STACK IS FULL" << std::endl;
        std::exit(1);
    }
    T ret = head->data;
    node* tmp = head->next;
    delete head;
    head = tmp;
    return ret;
}
template <typename T>
T stack<T>::peek(){
    if(empty()){
        std::cout << "STACK IS FULL" << std::endl;
        std::exit(1);
    }
    return head->data;
}
template <typename T>
bool stack<T>::empty(){
    return !head; // head == nullptr
}

#endif