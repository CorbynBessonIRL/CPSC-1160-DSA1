#include <iostream>
#include <vector>
//find all binary seq of length k that have n 1 in it
// k = 3 n = 2
//110, 101 ,011 
// k = 4 n = 1
// 1000, 0100, 0010, 0001
// k =4 n 2
//1100, 1010 , 1001, 0110, 0101, 0011
void find_ones(int k, int n, std::string & s){
    if(k == 0){
        if( n == 0){
            std::cout << s << std::endl;
        }
        return;
    }
    s[k-1] = '0';
    find_ones(k-1,n,s);
    s[k-1] = '1';
    find_ones(k-1,n-1,s);
}

void find_ones(int k, int n){
    if(n < 0 || k < 0){
        return;
    }
    std::string s;
    s.resize(k);
    find_ones(k,n,s);

}
int sel_sort(std::vector<int> & v){
    int cc = 0;
    for(int i = 0; i < static_cast<int>(v.size()); i++){
        int m = i;
        for(unsigned j = i+1; j < v.size(); j++){
            if(++cc && v[m] < v[j]){
                m = j;
            }
        }
        //std::swap(v[i],v[m]);
        int temp = v[i];
        v[i] = v[m];
        v[m] = temp;
    }
    return cc;
}

int sel_sortr(std::vector<int> & v,int i = 0){
    int cc = 0;
    if(i == v.size()-1){
        return 0;
    }
    int m = i;
    for(unsigned j = i+1; j < v.size(); j++){
        if(++cc && v[m] < v[j]){
            m = j;
        }
    }
    //std::swap(v[i],v[m]);
    int temp = v[i];
    v[i] = v[m];
    v[m] = temp;

    return cc + sel_sortr(v,i+1);
}

int main(){
    std::vector<int> v = {3,7,12,3,-5,10,1};
    find_ones(5,2);
    std::cout << sel_sort(v) << std::endl;
    for(auto i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}