#include <iostream>
#include "stack.h"
#include <vector>
void bin_seq(int k, std::string s = ""){
    if(k == 0){
        std::cout << s << std::endl;
        return; 
    }
    bin_seq(k-1,s +'0');
    bin_seq(k-1,s+'1');
}

void bin_seq_s(int k){
    stack<std::string> s;
    s.push("");
    while(!s.empty()){
        std::string tmp = s.pop();
        if(tmp.size() == k){
            std::cout << tmp << std::endl;
        }
        else{
            s.push(tmp+'0');
            s.push(tmp+'1');
        }
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

struct state{
    int row;
    int col;
};
int path_count_s(std::vector<std::vector<char>> &m){
    stack<state> s;
    int count = 0;
    s.push({0,0});
    while(!s.empty()){
        state tmp =s.pop();  
        if(tmp.row == m.size() || tmp.col == m[tmp.row].size()
        || m[tmp.row][tmp.col] == 'X'){
            count = count + 0;
            
        }
        else if(tmp.row == m.size()-1 && tmp.col == m[tmp.row].size()-1){
            count = count + 1;
        }
        else{
            s.push({tmp.row+1,tmp.col});
            s.push({tmp.row,tmp.col+1});
        }
    }
    return count;
}

bool valid_brackets(const std::string& str){
    stack<char> s;
    for( char c : str){
        if(c == '['){
            s.push(']');
        }
        else if(c== '('){
            s.push(')');
        }
        else{
            if(s.empty() || s.pop() != c){
                return false;
            }
        
        }
    }
    return s.empty();
}

int main(){
std::vector<std::vector<char>> m(4,std::vector<char>(5,'-'));
    m[1][2]= 'X';
    m[2][1] = 'X';
    m[2][2] = 'X';
    std::cout << path_count(m) << std::endl;
    std::cout << path_count_s(m) << std::endl;
    std::cout << valid_brackets("[[()]]()") << std::endl;
    std::cout << valid_brackets("[[()]") << std::endl;
    std::cout << valid_brackets("[[())]]") << std::endl;
    return 0;
}