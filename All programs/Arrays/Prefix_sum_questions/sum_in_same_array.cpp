// Prefix-Sum: means ------------------------------------> prefix sum of an array is an array of same size in which ith element is the sum of all elements from 0 to i in the original array.
// eg: [1,2,3,4,5] => [1,3,6,10,15] 

// Given an integers array 'a', return the prefix sum/ running sum in the same array without creating a new array.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> a = {1,2,3,4,5};
//     for(int i=1; i<a.size(); i++) {
//         a[i] += a[i-1];
//     }
//     for(int i=0; i<a.size(); i++) {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void runningSum(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        v[i] += v[i - 1];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    runningSum(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}