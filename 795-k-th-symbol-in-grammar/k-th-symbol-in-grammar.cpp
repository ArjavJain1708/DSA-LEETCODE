
class Solution {
public:
    int kthGrammar(int n, int k) {
        // Base case: first row is always 0
        if (n == 1) return 0;
        
        // Find the length of the previous row (which is half the current row)
        int prev_len = 1 << (n - 2); 
        
        // If k is in the first half, it's the same as the previous row
        if (k <= prev_len) {
            return kthGrammar(n - 1, k);
        } 
        // If k is in the second half, it's the inverse
        else {
            return !kthGrammar(n - 1, k - prev_len);
        }
    }
};
