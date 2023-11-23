// bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


using namespace std;
int main()
{
    vector<int> v{ 5, 4, 3, 2, 1 };

    int right;
    int left;

    for (right = v.size() - 1; right > 0; right--)
    {
        for (left = 0; left < right; left++)
        {
            if (v[left] > v[left + 1])
            {
                swap(v[left], v[left + 1]);
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }


}

