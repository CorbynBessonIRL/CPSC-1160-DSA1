#include <iostream>
struct node{
    int data;
    node* next;
};
node* add_to_head(node * p, int x){
    return new node{x,p};
}
node* add_to_end(node * p, int x){
    // if(p == nullptr){
    //     return new node{x,p};
    // }
    // node * h = p;
    // while(p->next != nullptr){
    //     p = p->next;
    // }
    // p->next = new node{x, nullptr};
    // return h;
    if(p == nullptr){
         return new node{x,p};
    }
    p->next = add_to_end(p->next,x);
    return p;
}

node* insert(node * p, int x){
    if(p == nullptr || x < p->data){
         return new node{x,p};
    }
    p->next = insert(p->next,x);
    return p;
}

void print_rev(node * p){
    if(p != nullptr){
        print_rev(p->next);
        std::cout << p->data << " ";
    }

}
void print(node * p){
    while(p != nullptr){
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}
int main(){
    node * head = nullptr;
    head = add_to_end(head,6);
    head = add_to_head(head,5);
    head = add_to_head(head,4);
    head = add_to_head(head,2);
    head = add_to_head(head,1);
    head = add_to_end(head,7);
    head = insert(head,3);
    print(head);
    print_rev(head);
    std::cout << std::endl;

}