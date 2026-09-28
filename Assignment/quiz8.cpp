#include <iostream>
#include "quiz8.h"

using namespace std;

int main()
{
    // Test the Copy Constructor
    quiz8 obj1(5, 10); // Create an array of size 5, each element initialized to 10
    cout << "obj1 (original): ";
    for (int i = 0; i < 5; i++)
    {
        cout << obj1[i] << " "; // Should print: 10 10 10 10 10
    }
    cout << endl;

    quiz8 obj2 = obj1; // Create obj2 using the copy constructor
    cout << "obj2 (copy constructor): ";
    for (int i = 0; i < 5; i++)
    {
        cout << obj2[i] << " "; // Should print: 10 10 10 10 10
    }
    cout << endl;

    // Modify obj1 and check if obj2 is unaffected (deep copy test)
    obj1[2] = 99; // Modify the 3rd element in obj1
    cout << "obj1 (after modifying): ";
    for (int i = 0; i < 5; i++)
    {
        cout << obj1[i] << " "; // Should print: 10 10 99 10 10
    }
    cout << endl;

    cout << "obj2 (after modifying obj1): ";
    for (int i = 0; i < 5; i++)
    {
        cout << obj2[i] << " "; // Should print: 10 10 10 10 10 (unaffected)
    }
    cout << endl;

    return 0;
}