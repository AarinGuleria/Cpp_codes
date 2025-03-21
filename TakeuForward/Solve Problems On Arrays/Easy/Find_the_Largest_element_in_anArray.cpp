//Problem Statement: Given an array, we have to find the largest element in the array.

// Brute Force Approach
// Algorithm / Intuition
// Solution1: Sorting
// Intuition:
// We can sort the array in ascending order, hence the largest element will be at the last index of the array. 

// Approach: 
// Sort the array in ascending order.
// Print the (size of the array -1)th index.
// DryRun: 
// Before sorting: arr[] = {2,5,1,3,0};

// After sorting: arr[] = {0,1,2,3,5};

// Hence answer : arr[sizeofthearray-1] =5


#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}

// Optimized Approach (Finding Max Without Sorting)
// Since we only need the largest element, we can avoid sorting altogether by using max_element(), which runs in O(n):

// cpp
// Copy
// Edit
// int findMax(vector<int>& arr) {
//     return *max_element(arr.begin(), arr.end()); // O(n)
// }
// New Complexity: O(n) (linear time), which is better than O(n log n).



// Output:

// The Largest element in the array is: 5
// The Largest element in the array is: 10

// Complexity Analysis

// Time Complexity: O(N*log(N))

// Space Complexity: O(n)


// Recursive Approach 

// Algorithm / Intuition
// Solution2: Using a max variable
// Intuition:
// We can maintain a max variable that will update whenever the current value is greater than the value in the max variable.  

// Approach: 
// Create a max variable and initialize it with arr[0].
// Use a for loop and compare it with other elements of the array
// If any element is greater than the max value, update max value with the element’s value
// Print the max variable.


#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}



// Output:

// The largest element in the array is: 5
// The largest element in the array is: 10

// Complexity Analysis

// Time Complexity: O(N)

// Space Complexity: O(1)
