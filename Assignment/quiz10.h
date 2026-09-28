#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>

class quiz{
    public:
       //turn the string into a list so each character is stored in a node 
       //the order of the characters in the list must match the string
       quiz(const std::string&);
       //Print out each character in the list.
       void print() const;

       ~quiz();
       quiz(const quiz &);
       const quiz &operator=(const quiz &);

    private:
        struct node{
            char *data; // NOTE THIS IS A POINTER
            node *next;
        };
        node *head;

        //make a deep copy and return the head of that copy
        node *copy_list(node *p);
        //delete all the node in the list and return a nullptr
        node *delete_list(node *p);
};

quiz::quiz(const std::string &str){
   
}



#endif
