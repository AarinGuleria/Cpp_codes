// Sort an array consisting of only 0s and 1s.
// vector approach

#include <iostream>
#include <vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }

        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }

        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
    }

    return;
}

int main()
{

    int size;
    cin >> size;

    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }

    sortZerosAndOnes(v);

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
