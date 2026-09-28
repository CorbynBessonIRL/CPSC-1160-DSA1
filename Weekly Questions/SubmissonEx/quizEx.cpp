#include <string>
#include <iostream>

char most_common(std::string str){
    int a = 0,b = 0,c = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] == 'A'){
            a +=1;
        }
        if(str[i] == 'b' || str[i] == 'B'){
            b +=1;
        }
        if(str[i] == 'c' || str[i] == 'C'){
            c +=1;
        }
        
    }
    std::cout << a <<  " " << b  <<" " << c << std::endl;
    if( a >=b && a >=c){
        return 'A';
    }
    else if(c > a && c > b){
        return 'C';
    }
    else{
        return 'B';
    }
    
}


int main(){
    std::string str = "";
    std::cout << most_common(str);

}