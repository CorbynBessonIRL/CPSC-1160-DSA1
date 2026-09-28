#ifndef MV_H
#define MV_H
#include <iostream>

template <typename T>
class my_vector{
    public:
        my_vector(int N); //create an array with N empty slots
        my_vector(); // create an empty array
        int len(); // returns the number of items in the array
        void append(T x); //which should add x to the end of the array 
                            //if the array is full grow the array to size*2+1
        T & operator[](int i); // returns the ith item in the array

        ~my_vector(); // should delete
        my_vector(const my_vector&); //deep copy
        const my_vector& operator=(const my_vector&); //delete then deep copy
        
    private:
        int size; //actual size of the array
        T *arr; //the array
        int n; // number of items in the array
};

template <typename T>
my_vector<T>::my_vector(){
   size = n = 0;
   arr = nullptr;
}

template <typename T>
my_vector<T>::my_vector(int N){
   size = n = N;
   arr = new int[N];
}
template <typename T>
int my_vector<T>::len(){
   return n;
}

template <typename T>
T & my_vector<T>::operator[](int i){
    return arr[i];
}

template <typename T>
void my_vector<T>::append(T x){
    if(n == size){
        size = size*2+1;
        T * brr = new T[size];
        for(int i = 0; i < n;i++){
            brr[i] = arr[i];
        }
        delete[]arr;
        arr = brr;
    }
    arr[n++] = x;
}

template <typename T>
my_vector<T>::~my_vector(){
    delete[] arr;
}

template <typename T>
my_vector<T>::my_vector(const my_vector<T>& rhs){
    n = rhs.n;
    size = rhs.size;
    arr = new int[size];
    for(int i = 0; i < n; i++){
        arr[i] = rhs.arr[i];
    }
}

template <typename T>
const my_vector<T>& my_vector<T>::operator=(const my_vector<T>& rhs){
    if(this != &rhs){
        delete[] arr;
        n = rhs.n;
        size = rhs.size;
        arr = new int[size];
        for(int i = 0; i < n; i++){
            arr[i] = rhs.arr[i];
        }
    }
    return *this;
}




#endif