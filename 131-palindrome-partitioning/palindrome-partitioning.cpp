class Solution {
private:
    bool isPalindrome(string& s, int low, int high) {
        while (low < high) {
            if (s[low++] != s[high--]) return false;
        }
        return true;
    }

    void helper(int idx, string& s, vector<string>& path, vector<vector<string>>& res) {
        // Base case: if we reach the end of the string, save the current partition
        if (idx == s.length()) {
            res.push_back(path);
            return;
        }

        // Loop through all possible ending points for the current substring
        for (int i = idx; i < s.length(); ++i) {
            // Check if s[idx...i] is a palindrome
            if (isPalindrome(s, idx, i)) {
                path.push_back(s.substr(idx, i - idx + 1)); // Choose
                helper(i + 1, s, path, res);                // Explore
                path.pop_back();                            // Unchoose (Backtrack)
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        helper(0, s, path, res);
        return res;
    }
};