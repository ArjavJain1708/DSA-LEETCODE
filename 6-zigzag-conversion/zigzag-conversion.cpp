class Solution {
public:
    string convert(string s, int numRows) {
        // Base case: if 1 row or string is shorter than rows, no zigzag needed
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        vector<string> rows(min(numRows, int(s.length())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;
            // If we reach the top or bottom row, reverse the direction
            if (curRow == 0 || curRow == numRows - 1) {
                goingDown = !goingDown;
            }
            // Move up or down
            curRow += goingDown ? 1 : -1;
        }

        string result = "";
        for (string row : rows) {
            result += row;
        }

        return result;
    }};          