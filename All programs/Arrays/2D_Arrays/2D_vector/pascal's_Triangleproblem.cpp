// Given given an integer n, return the first n rows of Pascals triangle.
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include <iostream>
#include <vector>
using namespace std;

// vector<vector<int> > pascalTriangle(int n) {
//   vector<vector<int> > pascal(n);

//   for (int i = 0; i < n; i++) {
//     pascal[i].resize(i + 1);

//     for (int j = 0; j <= i; j++) {  // j<i+1
//       if (j == 0 || j == i) {
//         pascal[i][j] = 1;
//       } else {
//         pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
//       }
//     }
//   }
//   return pascal;
// }
vector<vector<int>> pascalTriangle(int n) {
  vector<vector<int>> pascal;
  for (int i = 0; i < n; i++) {
    vector<int> row;
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        row.push_back(1);
      } else {
        row.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
      }
    }
    pascal.push_back(row);
  }
  return pascal;
}

int main() {
  int n;
  cin>>n;

  vector<vector<int> > ans;
  ans = pascalTriangle(n);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}