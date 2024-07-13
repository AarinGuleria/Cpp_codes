// Given an integer array 'a' sorted in non-decreasing order, return an array of squares of each number sorted in non-decreasing order.

// here we will see the absolute value of the elemnts and that will be largest or maximum.
// eg: [-10,-3,2,4,5] => [100,9,4,16,25](this is not sorted )

// The abs function is part of the C++ Standard Library and is used to return the absolute value of a number. The absolute value of a number is its non-negative value, regardless of its sign.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedSquaredArray(vector<int> &v)
{

    vector<int> ans;

    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }

    sortedSquaredArray(v);

    return 0;
}