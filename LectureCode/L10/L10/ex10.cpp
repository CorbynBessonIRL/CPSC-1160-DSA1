#include <iostream>
#include <vector>
void merge(std::vector<int> & v , int s_a, int e_a,int s_b,int e_b, std::vector<int> & w){
    int i = s_a;
    int j = s_b;
    int k = s_a;
    while(i <= e_a && j <= e_b){
        if(v[i] < v[j]){
            w[k++] = v[i++];
        }else if(v[i] > v[j]){
            w[k++] = v[j++];
        }else{
            w[k++] = v[i++];
            w[k++] = v[j++];
        }

    }
    while(i <= e_a){
        w[k++] = v[i++];
    }
    while(j <= e_b){
        w[k++] = v[j++];
    }
    for(int x = s_a; x <=e_b; x++){
        v[x] = w[x];
    }

}

void merge_s(std::vector<int> & v , int L, int H, std::vector<int> & w){
    if(L >= H){
        return;
    }
    int mid = (L+H)/2;
    merge_s(v,L,mid,w);
    merge_s(v,mid+1,H,w);
    merge(v,L,mid,mid+1,H,w);
}

void merge_s(std::vector<int> & v){
    std::vector<int> w(v.size());
    merge_s(v,0,v.size(),w);
}

int part(std::vector<int> & v, int  L, int H){
    int piv = v[L];
    while(L < H){
        while(L < H && v[H] >= piv){
            H--;
        }
        v[L] = v[H];
        while(L < H && v[L] <= piv){
            L++;
        }
        v[H] = v[L];
    }
    v[L] = piv;
    return L;
}

void quick_s(std::vector<int> & v, int  L, int H){
    if(L >= H){
        return;
    }
    int piv = part(v,L,H);
    quick_s(v,L,piv-1);
    quick_s(v,piv+1,H);
}

void quick_s(std::vector<int> & v){
    quick_s(v,0,v.size()-1);
}

int main(){
    std::vector<int> v = {2,8,12,6,3,7,2,-4,10};
    merge_s(v);
    for(auto x : v){
        std::cout << x << " ";
    }
    std::cout << std::endl;

}