class Solution {
public:
//ARJAV
    bool isSubsequence(string s, string t) {
        int s_ptr = 0;
        int t_ptr = 0;
        
        // Scan through both strings
        while (s_ptr < s.length() && t_ptr < t.length()) {
            // If characters match, move the s pointer to look for the next char
            if (s[s_ptr] == t[t_ptr]) {
                s_ptr++;
            }
            // Always move the t pointer forward
            t_ptr++;
        }
        
        // If s_ptr reached the end, all characters were found in the correct order
        return s_ptr == s.length();
    }
};