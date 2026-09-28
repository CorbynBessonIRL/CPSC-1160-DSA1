#include <iostream>

struct node{
    int data;
    node* next;
};

node* insert(node* p, int x){
    if(!p || p->data > x){
        return new node{x,p};
    }
    p->next = insert(p->next,x);
    return p;
}

void sort(node *& p){
    // node* h = nullptr;
    // while(p){
    //     node* tmp = p;
    //     p = p->next;
    //     h = insert(h,tmp->data);
    //     delete tmp;
    // }
    // p = h;

    // for(node * x = p; x ; x = x->next){
    //     node * m = x;
    //     for(node * y = x->next ; y ; y = y->next){
    //         if(m->data > y->data){
    //             m = y;
    //         }
    //     }
    //     std::swap(x->data,m->data);
    // }

    node * head = nullptr;
    
    while(p){
        node * m = p;
        node * curr = p;
        node * pr_m = nullptr;
        node * prev = nullptr; 
        while(curr){
            if(curr->data > m->data){
                pr_m = prev;
                m = curr;
            }
            prev = curr;
            curr = curr->next;
        }
        if(!pr_m){
            p = p->next;

        }else{
            pr_m->next = m->next;
        }
        m->next = head;
        head = m; 
        
    }
    
    p = head;  

}

int main(){
    node* head = new node{2,new node{1,new node{-5,new node{14,new node{3,nullptr}}}}};
    for(node* p = head; p ; p = p->next){
        std::cout << p->data << " ";
    }
    std::cout << std::endl;
    sort(head);
    for(node* p = head; p ; p = p->next){
        std::cout << p->data << " ";
    }
    std::cout << std::endl;
}