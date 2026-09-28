#include <iostream>
#include <vector>

//write a recursive function that will sum up all values in the vector
//you must use this prototype function
//you probably want to use a helper function
int sum_vec(const std::vector<int> & v);

// int sum_vec(const std::vector<int> & v,int i){
//     if(i == v.size()){
//         return 0;
//     }
//     return v[i] + sum_vec(v,i+1);
// }

// int sum_vec(const std::vector<int> & v,int i){
//     if(i < 0){
//         return 0;
//     }
//     return v[i] + sum_vec(v,i-1);
// }

int sum_vec(const std::vector<int> & v,int low,int high){
    if(low > high){
        return 0;
    }
    if(low == high){
        return v[high];
    }
    int mid = (low+high)/2;
    return sum_vec(v,low,mid)+sum_vec(v,mid+1,high);
}

int sum_vec(const std::vector<int> & v){
    return sum_vec(v,0,v.size()-1);
}

//write a recursive function that will reverse an vector
void flip(std::vector<int> & v,int i = 0){
    if(i == v.size()/2){
        return;
    }
    int tmp = v[i];
    v[i] = v[v.size()-1-i];
    v[v.size()-1-i] = tmp;
    flip(v,i+1);
}

//write recursive linear search
int lin_s(const std::vector<int> & v,int key,int i = 0){
    if(i == v.size()){
        return -1;
    }
    if(v[i] == key){
        return i;
    }
    return lin_s(v,key,i+1);
}

int bin_s(const std::vector<int> & v,int key,int low,int high){
    if(low > high){
        return -1;
    }
    int mid = (low+high)/2;
    if(v[mid] == key){
        return mid;
    }
    if(v[mid] > key){
        return bin_s(v,key,low,mid-1);
    }
    return bin_s(v,key,mid+1,high);
}

int bin_s(const std::vector<int> & v,int key){
    return bin_s(v,key,0,v.size()-1);
}
int main(){
    std::vector<int> v = {5,4,3,2,1};
    std::cout << sum_vec(v) << std::endl;
    flip(v);
    for(int x : v){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::cout << lin_s(v,3) <<std::endl;
    std::cout << lin_s(v,1) <<std::endl;
    std::cout << lin_s(v,5) <<std::endl;
    std::cout << lin_s(v,31) <<std::endl << std::endl;

    
    std::cout << bin_s(v,3) <<std::endl;
    std::cout << bin_s(v,1) <<std::endl;
    std::cout << bin_s(v,5) <<std::endl;
    std::cout << bin_s(v,31) <<std::endl;
    return 0;
}