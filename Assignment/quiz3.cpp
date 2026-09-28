#include <iostream>
#include <string>
#include <cctype>

bool more_caps(std::string &og, int index, int upper_count, int lower_count)
{
    if (index == og.size())
    {
        return upper_count > lower_count;
    }

    if (isupper(og[index]))
    {
        return more_caps(og, index + 1, upper_count + 1, lower_count);
    }
    else if (islower(og[index]))
    {
        return more_caps(og, index + 1, upper_count, lower_count + 1);
    }
    else
    {
        return more_caps(og, index + 1, upper_count, lower_count);
    }
}
bool more_caps(std::string &og)
{
    return more_caps(og, 0, 0, 0);
}

/*bool more_caps(std::string &og){
    return more_caps(og, 0);
}

bool more_caps(std::string &og, int index){
    if (index == og.size()){
        return true;
    }
    bool check = more_caps(og, index + 1);
    if (isupper(og[index]) && check){
        return true;
    }
    else{
        return false;
    }
}*/

#include <cassert>

void test_more_caps()
{
    std::string test;

    // More uppercase than lowercase
    test = "ABCDabc";
    assert(more_caps(test) == true);

    test = "HELLO";
    assert(more_caps(test) == true);

    // More lowercase than uppercase
    test = "abcAB";
    assert(more_caps(test) == false);

    test = "hello";
    assert(more_caps(test) == false);

    // Equal counts
    test = "AaBbCc";
    assert(more_caps(test) == false);

    // With numbers and symbols
    test = "ABC123abc";
    assert(more_caps(test) == false);

    // Empty string
    test = "";
    assert(more_caps(test) == false);

    std::cout << "All tests passed!" << std::endl;
}

int main()
{
    test_more_caps();
    return 0;
}

