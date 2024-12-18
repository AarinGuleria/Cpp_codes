// Write a program to display multiplication 2 matrices entered by user.

#include <iostream>
using namespace std;

int main() {
  int r1, c1;
  cin >> r1 >> c1;

  int A[r1][c1];
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cin >> A[i][j];
    }
  }

  int r2, c2;
  cin >> r2 >> c2;

  int B[r2][c2];
  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      cin >> B[i][j];
    }
  }

  if (c1 != r2) {
    cout << "Array Multiplication not possible" << endl;
  } else {
    int C[r1][c2];
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        int value = 0;
        for (int k = 0; k < c1; k++) {  // k<r2 can also be used
          value += A[i][k] * B[k][j]; 
          //here i and j are fixed for particular row and column and k is used to traverse through that particular row and column.
        }
        C[i][j] = value;
      }
    }

    // displaying the resultant C matrix
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        cout << C[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}