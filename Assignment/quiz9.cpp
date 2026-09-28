#include <iostream>

struct node {
    int data;
    node* next;
};

node *remove_even(node* p){
    if (p==nullptr){
        return p;
    }

    if (p->data % 2 == 0){
        node *tmp = p;
        p = p->next;
        return remove_even(p);
    }
    p->next = remove_even(p->next);
    return p;
}



int main(){
    node *test1 = nullptr;
    return 0;
}