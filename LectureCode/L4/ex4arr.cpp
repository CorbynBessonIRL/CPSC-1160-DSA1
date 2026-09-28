#include <iostream>
//write a function to is passed in an arr and make a reverse copy of the arr.
void rev(int arr[], int brr[], int size){
    for(int i = 0; i < size; i++){
        brr[i] = arr[size-i-1];
    }
}

void print(int M[][4],int R,int C){
    for(int r = 0; r < R;r++){
        for(int c = 0; c < C; c++){
            std::cout << M[r][c] << " ";
        }
        std::cout << std::endl;
    }
}

template <typename T>
void print(T arr[], int size){
    for(int i = 0 ; i< size; i++){
        std::cout << arr[i] <<" ";
    }
    std::cout << std::endl;
}

void copy(int arr[], int brr[], int size){
    for(int i = 0 ; i < size; i++){
        brr[i] = arr[i];
    }
}

int main(){
    const int size = 5;
    int arr[size] = {0,1,2};
    int brr[size];
    
    arr[0] = 42;
    //arr[100] = 68;
    for(int i = 0 ; i< size; i++){
        std::cout << arr[i] <<" ";
    }
    std::cout << std::endl;
    rev(arr,brr,size);
    print(brr,size);
    const int R = 3;
    const int C = 4;
    int M[R][C] ={0};
    M[2][0]=4; 
    print(M,R,C);
}