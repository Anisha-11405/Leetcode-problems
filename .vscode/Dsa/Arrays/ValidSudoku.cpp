#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int u1[9][9] = {0}, u2[9][9] = {0}, u3[9][9] = {0};
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0' - 1;
                    int k = i / 3 * 3 + j / 3;
                    if (u1[i][num] || u2[j][num] || u3[k][num])
                        return false;
                    u1[i][num] = u2[j][num] = u3[k][num] = 1;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    
    // Example Sudoku board
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    bool isValid = sol.isValidSudoku(board);
    
    // Print the result
    cout << (isValid ? "Valid Sudoku" : "Invalid Sudoku") << endl;

    return 0;
}
