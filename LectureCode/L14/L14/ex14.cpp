#include <iostream>

void set_to_three(int *arr, int size){
    //arr = new int[8];
    for(int i = 0; i < 8; i++){
        arr[i] = 3;
        //*(arr+i) = 3;
        //*arr++ = 3; 
    }
}

int* make_arr(int size,int v = 0){
    int* arr = new int[size];
    for(int i = 0 ; i < size; i++){
        arr[i] = v;
    }
    return arr;
}

int* reverse_copy(int * arr, int size){
    int* brr = new int[size];
    for(int i = size-1; i >=0; i--){
        brr[i] = arr[size-i-1];
    }
    return brr;
}

void reverse(int * arr,int size){
    // int *brr = reverse_copy(arr,size);
    // for(int i = 0 ; i < size; i++){
    //     arr[i] = brr[i];
    // }
    // delete[]brr;
    int l = 0;
    int h = size-1;
    while(l < h){
        int tmp = arr[l];
        arr[l] = arr[h];
        arr[h] = tmp;
        l++;
        h--;
    }
}

int * append(int * arr,int &size, int v){
    int *brr = new int[size+1];
    for(int i = 0; i < size; i++){
        brr[i] = arr[i];
    }
    brr[size] = v;
    delete[] arr;
    size++;
    return brr;
}

void push_back(int *& arr,int &size, int v){
    int *brr = new int[size+1];
    for(int i = 0; i < size; i++){
        brr[i] = arr[i];
    }
    brr[size] = v;
    delete[] arr;
    size++;
    arr = brr;
}

//Remove all numbers in the array at are not bigger than all the numbers that come before it
// {1,4,2,6,7,3,5} <- {1,4,6,7} and size will be 4
void clean(int *& arr,int &size){
    if(size <= 1){
        return;
    }
    //get size
    int count = 1;
    int max = arr[0];
    for(int i = 1; i < size;i++){
        if(arr[i] > max){
            max = arr[i];
            count++;
        }
    }
    //make new array
    int * brr = new int[count];
    //fill new arry
    brr[0] = arr[0];
    int j = 0;
    for(int i = 1; i < size && j < count;i++){
        if(arr[i] > brr[j]){
            brr[j+1] = arr[i];
            j++;
            
        }
    }
    //delete old arry
    delete[] arr;
    //update size
    size = count;
    //assign new array to old array
    arr = brr;
}
int main(){
    int size = 5;
    int *arr,*brr;
    arr = new int[5]{1,2,3};
    set_to_three(arr,5);
    brr = make_arr(6,6);
    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    arr = new int[5]{1,2,3,4,5};
    int * crr = reverse_copy(arr,5);
    for(int i = 0; i < size; i++){
        std::cout << crr[i] << " ";
    }
    std::cout << std::endl;
    reverse(crr,5);
    for(int i = 0; i < size; i++){
        std::cout << crr[i] << " ";
    }
    std::cout << std::endl;
    crr = append(crr,size,6);
    for(int i = 0; i < size; i++){
        std::cout << crr[i] << " ";
    }
    std::cout << std::endl;
    push_back(crr,size,7);
    int d_size = 7;
    int *drr = new int[]{1,4,2,6,7,3,5};
    clean(drr,d_size);
    for(int i = 0; i < d_size; i++){
        std::cout << drr[i] << " ";
    }
    std::cout << std::endl;
    int err[20];
    std::cout << (sizeof(err)/sizeof(err[0])) << std::endl;
}