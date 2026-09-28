#include <iostream>
#include <vector>


// void bin_seq(int k, std::string  str){
//     if( k == 0){
//         std::cout << str << std::endl;
//         return;
//     }
//     bin_seq(k-1,str+'0');
//     bin_seq(k-1,str+'1'); 
// }

void bin_seq(int k, std::string & str){
    if( k == 0){
        std::cout << str << std::endl;
        return;
    }
    str[k-1] = '0';
    bin_seq(k-1,str);
    str[k-1] = '1';
    bin_seq(k-1,str); 
}

void bin_seq(int k){
    std::string str;
    str.resize(k);
    bin_seq(k,str);

}

void all_seq(int k, int base =2, std::string str = ""){
     if( k == 0){
        std::cout << str << std::endl;
        return;
    }
    for(char i = '0'; i < (base+'0'); i++){
        all_seq(k-1,base,str+i);
    }
}

int path_count(std::vector<std::vector<char>> &m,int row= 0, int col = 0){
    if(row == m.size() || col == m[row].size() || m[row][col] == 'X'){
        return 0;
    }
    if(row == m.size()-1 && col == m[row].size()-1){
        return 1;
    }
    return path_count(m,row+1,col) + path_count(m,row,col+1);
}

int main(){
    bin_seq(4);
    std::vector<std::vector<char>> m(4,std::vector<char>(5,'-'));
    m[1][2]= 'X';
    m[2][1] = 'X';
    m[2][2] = 'X';
    std::cout << path_count(m) << std::endl;
    return 0;
}