class Solution {
public:
//ARJAV
    int findLUSlength(string a, string b) {
        // If they are exactly the same, no uncommon subsequence exists
        if (a == b) {
            return -1;
        }
        // Otherwise, the entire longer string is the longest uncommon subsequence
        return max(a.length(), b.length());
    }
};