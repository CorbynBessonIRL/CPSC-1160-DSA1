#include <iostream>
#include <string>
#include <cctype>

void flip(int n, std::string &s, int t, int h)
{
    if (n <= 0)
    {
        if (t >= 2 || h >= 2) 
        {
            bool row = false;                      
            for (int i = 0; i < s.size() - 1; i++) 
            {
                if (s[i] == s[i + 1]) 
                {
                    row = true;
                }
            }
            if (row) 
            {
                std::cout << s << "";
                return;
            }
        }
        return;
    }
    s[n - 1] = 'T';          
    flip(n - 1, s, t + 1, h); 
    s[n - 1] = 'H';
    flip(n - 1, s, t, h + 1);
}

void flip(int n)
{
    std::string s = "";
    s.resize(n);
    flip(n, s, 0, 0);
}

int main()
{
    flip(2);
    std::cout << std::endl;
    flip(3);
    std::cout << std::endl;
    flip(1);
    return 0;
}
