#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>

class quiz8{
    public: 
    //Set an empty array and size of zero
        quiz8();
    //Make an array of size n with each position being the value x
        quiz8(int n, int x);
    // Coded for you
        int& operator[](int i); // already coded for you

        // add all functions needed to manage memory.
        // Remember don't code in the class only prototype
        quiz8(const quiz8 &);
        const quiz8 &operator=(const quiz8 &);
        ~quiz8();

    private:
        int *size; //The size of the array 
        int *arr;  // The array for the object
};

int &quiz8::operator[](int i)
{
    return arr[i];
}

quiz8::quiz8(){
    size = new int(0);
    arr = nullptr;
}

quiz8::quiz8(int n, int x = 0){
    size = new int(n);
    arr = new int[n];
    for (int i = 0; i < n; i++){
        arr[i] = x;
    }
}

quiz8::quiz8(const quiz8&rhs){
    size = new int(*rhs.size);
    arr = new int[*rhs.size];
    for (int i = 0; i < *size; i++){
        arr[i] = rhs.arr[i];
    }
}

const quiz8& quiz8::operator=(const quiz8 &rhs){
    if (this != &rhs){
        delete size;
        delete[] arr;
        size = new int(*rhs.size);
        arr = new int[*rhs.size];
        for (int i = 0; i < *size; i++)
        {
            arr[i] = rhs.arr[i];
        }
    }
    return *this;
}

quiz8::~quiz8(){
    delete size;
    delete[] arr;
}

#endif
