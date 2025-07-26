#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m) {
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
  cout<<"array elements in spiral order is :"<<endl;
    while (srow <= erow && scol <= ecol) {
        // top
        for (int j = scol; j <= ecol; j++) {
            cout << mat[srow][j] << " ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << " ";
        }
        // bottom
        
        for (int j = ecol - 1; j >= scol; j--) {
                        if (srow == erow) {  //so that repetition of middle element cannot happen due to its already prin during top iteration
                            break;
                        }
                   cout << mat[erow][j] << " ";
        }
        
        // left
      
         for (int i = erow - 1; i >= srow+1; i--) {
                        if (srow == erow) {   // so that repition for middle elements cannot repeat like it has already been printed during right execution/iteration
                            break;
                        }
                    cout << mat[i][scol] << " ";
         }
        

        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout << endl;
}



int main() {
    int n, m = 4;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Number of columns is fixed to 4." << endl;

    int mat[n][4];  // This is allowed by GCC (VLA), not standard C++ — best to use fixed n too if needed.

    cout << "Enter the matrix elements (" << n << "x4):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }

    spiralMatrix(mat, n, m);
    return 0;
}
