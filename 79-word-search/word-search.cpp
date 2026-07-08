class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        // Start search from every cell in the grid
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (backtrack(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }

private:
    bool backtrack(vector<vector<char>>& board, string& word, int i, int j, int index) {
        // 1. Success Base Case: We found every letter
        if (index == word.length()) return true;

        // 2. Failure Base Case: Out of bounds or mismatch
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) {
            return false;
        }

        // 3. Mark as visited (Crucial step to avoid infinite loops)
        char temp = board[i][j];
        board[i][j] = '#'; 

        // 4. Explore all 4 neighbors
        bool found = backtrack(board, word, i + 1, j, index + 1) ||
                     backtrack(board, word, i - 1, j, index + 1) ||
                     backtrack(board, word, i, j + 1, index + 1) ||
                     backtrack(board, word, i, j - 1, index + 1);

        // 5. Backtrack: Restore the original character so other paths can use it
        board[i][j] = temp;

        return found;
    }
};