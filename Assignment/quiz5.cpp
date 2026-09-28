#include <iostream>
#include <cctype>
#include <algorithm>

void makeNumChar(char arr[], int size)
{
    int pos = 0;

    for (int i = 0; i < size; i++)
    {
        if (isdigit(arr[i]))
        {
            std::swap(arr[i], arr[pos]);
            pos++;
        }
    }
}

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{

    char arr[] = {'a', 'b', '8'};
    int size = 3;

    std::cout << "Before: ";
    printArray(arr, size);

    makeNumChar(arr, size);

    std::cout << "After:  ";
    printArray(arr, size);

    return 0;
}
