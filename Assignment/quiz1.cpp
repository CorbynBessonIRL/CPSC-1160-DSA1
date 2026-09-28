#include <cstdlib>
#include <iostream>

int gen_random(){
    return (rand()% 10) + 1;
}

int main(){
    srand(time(0));
    std::cout << "Enter a value";
    int n, m;
    int odd = 0;
    int even = 0;
    std::cin >> n;

    for (int i = 0; i < n;i++){
        m = gen_random();
        std::cout << m << " ";  // debug print
        if (m % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    
    if (odd > even){
        std::cout << "Odd wins";
    }else if (odd < even){
        std::cout << "Even wins";
    }else{
        std::cout << "Tie";
    }
    return 0;
}