// Check if the given array is sorted or not.

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int array[6] = {1, 2, 3, 4, 5, 6};
    
    bool sortedflag = true;
    for (int i = 1; i < 6; i++) {
        if (array[i] < array[i - 1]) {
            sortedflag = false;
            break; // Exit the loop as soon as the array is found to be unsorted
        }
    }

    cout << sortedflag << endl; // Output: 1 (true) if sorted, 0 (false) if not sorted

    return 0;
}