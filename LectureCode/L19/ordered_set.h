#ifndef ORDERED_SET_H
#define ORDERED_SET_H
#include <iostream>

class OS{
    public:
        OS();
        void insert(int);
        friend std::ostream& operator<<(std::ostream&, const OS &);

        ~OS();
        OS(const OS &);
        const OS& operator=(const OS&);

        // this should return the intersection between the two set
        // should be a O(n+m) where n and m are the sizes of the set
        const OS operator-(const OS&);

    private:
        struct node{
            int data;
            node* next;
        };
        node* head;
        node* insert(node* ,int);
        node* copy_list(node *);
        node* delete_list(node*);
        node* inter(node*,node*);

};

OS::node* OS::inter(node* a,node*b){
    if(!a || !b){
        return nullptr;
    }
    if(a->data < b->data){
        return inter(a->next,b);
    }
    if(b->data < a->data){
        return inter(a, b->next);
    }
    return new node{a->data,inter(a->next,b->next)};
}
const OS OS::operator-(const OS& rhs){
    OS ret;
    ret.head = inter(head,rhs.head);
    return ret;
}

OS::~OS(){
    head = delete_list(head);
}
OS::OS(const OS & rhs){
    head = copy_list(rhs.head);
}
const OS& OS::operator=(const OS&rhs ){
    if(this != &rhs){
        head = delete_list(head);
        head = copy_list(rhs.head);
    }
    return *this;
}

OS::node* OS::copy_list(node * p){
    // node * h = nullptr;
    // if(p){
    //     h = new node{p->data,nullptr};
    //     node * t = h;
    //     p = p->next;
    //     while(p){
    //         t->next = new node{p->data,nullptr};
    //         t = t->next;
    //         p = p->next;
    //     }
    // }
    // return h;
    if(!p){
        return p;
    }
    return new node{p->data,copy_list(p->next)};
}

OS::node* OS::delete_list(node* p){
    // while(p){
    //     node* tmp = p->next;
    //     delete p;
    //     p = tmp;
    // }
    // return p;
    if(p){
        delete_list(p->next);
        delete p;
    }
    return nullptr;
}

OS::OS(){
    head = nullptr;
}

std::ostream& operator<<(std::ostream& out , const  OS & rhs){
    for(OS::node * p = rhs.head; p ; p = p->next){
        out << p->data << " ";
    }
    return out;
}


//insert in order if a copy of x is already in the list do nothing
OS::node* OS::insert(node* p ,int x){
    if(!p || p->data > x){
        return new node{x,p};
    }
    if(p->data == x){
        return p;
    }
    p->next = insert(p->next,x);
    return p;
}

void OS::insert(int x){
    head = insert(head,x);
}


#endif