// Given a square matrix, turn it by 90 degrees in a clockwise direction without
// using any extra space.i.e no extra array

// input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// output: [[7,4,1],[8,5,2],[9,6,3]]

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// void rotateMatrix(vector<vector<int> >& matrix) {
//   int n = matrix.size();
//   for (int i = 0; i < n; i++) {
//     for (int j = i; j < n; j++) {
//       swap(matrix[i][j], matrix[j][i]);
//     }
//   }
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n / 2; j++) {
//       swap(matrix[i][j], matrix[i][n - j - 1]);
//     }
//   }
// }

void rotateMatrix(vector<vector<int> >& matrix) {
  int n = matrix.size();
  // transpose
  for (int i = 0; i < n; i++) {
    for (int j = 03; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  // reverse every row
  for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
  }

  return;
}

int main() {
  int n;
  cin >> n;
  vector<vector<int> > matrix(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }
  rotateMatrix(matrix);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

