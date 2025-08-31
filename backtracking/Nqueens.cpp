#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------" << endl;
}

// check if a knight can be placed at (row, col)
bool isSafe(vector<vector<char>> board, int row, int col) {
    int n = board.size();

    // knight moves
    int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

    for (int k = 0; k < 8; k++) {
        int nr = row + dx[k];
        int nc = col + dy[k];
        if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
            if (board[nr][nc] == 'K') {
                return false;
            }
        }
    }
    return true;
}

// backtracking for knights
int  nKnights(vector<vector<char>> board, int row, int knightsLeft) {
    int n = board.size();

    if (knightsLeft == 0) {
        printBoard(board);
        return 1;
    }

    if (row == n) return 1;
    int count = 0;

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 'K';
           count+= nKnights(board, row + 1, knightsLeft - 1);
            board[row][col] = '.';
        }
    }

    // also try skipping placing a knight in this row
    nKnights(board, row + 1, knightsLeft);

    return count;
}

int main() {
    int n = 4;  // board size
    vector<vector<char>> board(n, vector<char>(n, '.'));

   int count =  nKnights(board, 0, n); // place n knights
   cout<<"count = " <<count<<endl; 

    return 0;
}
