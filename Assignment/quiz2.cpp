// write a c++ function that will take in two vectores of ints and retruns
// a new vector of the two vectors combined with no duplication.
// Note that push_back is a thing and can be very helpful for this problem.
// If v = {1,2,6,3}if you do v.push_back(4) then v = {1,2,6,3,4}
// Also use .size() to get the size of a vector.

#include <iostream>
#include <vector>

std::vector<int> combVec(const std::vector<int> &a,
                         const std::vector<int> &b)
{
    std::vector<int> result;

    for (int i = 0; i < a.size(); i++)
    {
        bool found = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (a[i] == result[j])
            {
                found = true;
            }
        }

        if (!found)
        {
            result.push_back(a[i]);
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        bool found = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (b[i] == result[j])
            {
                found = true;
            }
        }

        if (!found)
        {
            result.push_back(b[i]);
        }
    }

    return result;
}

int main()
{
    // Test case 1: Basic test
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {2, 3, 4};
    std::vector<int> result = combVec(v1, v2);

    std::cout << "Test 1: {1,2,3} + {2,3,4} = ";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    // Test case 2: Duplicates within same vector
    std::vector<int> v3 = {1, 1, 2, 2};
    std::vector<int> v4 = {3, 3, 4};
    result = combVec(v3, v4);

    std::cout << "Test 2: {1,1,2,2} + {3,3,4} = ";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    // Test case 3: Empty vector
    std::vector<int> v5 = {};
    std::vector<int> v6 = {1, 2, 3};
    result = combVec(v5, v6);

    std::cout << "Test 3: {} + {1,2,3} = ";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*std::vector<int> combVec(const std::vector<int> &a, const std::vector<int> &b)
{
    std::vector<int> e;
    std::vector<int> c;
    std::vector<int> d;
    int big = 0;
    int small = 0;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[i] != a[j])
            {
                c.push_back(a[i]);
            }
        }
    }
    for (int k = 0; k < b.size(); k++)
    {
        for (int g = 0; g < b.size(); g++)
        {
            if (b[k] != b[g])
            {
                d.push_back(b[k]);
            }
        }
    }
    if (c.size() < d.size())
    {
        big = d.size();
        small = c.size();
    }
    else
    {
        big = c.size();
        small = d.size();
    }
    for (int x = 0; x < big; x++)
    {
        for (int y = 0; y < small; y++)
        {
            if (c[x] != d[y])
            {
                e.push_back(c[x]);
            }
        }
    }
    return e;
}

int main()
{
    std::vector<int> a = {1, 3, 9, 1};
    std::vector<int> b = {2, 9, 4, 1, 2, 3};

    std::vector<int> result = combVec(a, b);

    for (int x : result)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}*/
