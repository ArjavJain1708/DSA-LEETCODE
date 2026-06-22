class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      // Step 1: Sort both vectors in ascending order
        sort(g.begin(), g.end());
       // sort(s.begin(), s.s_ptr() // typo safety: s.end()
        sort(s.begin(), s.end());
        
        int child_ptr = 0;
        int cookie_ptr = 0;
        
        // Step 2: Use two pointers to match cookies to children
        while (child_ptr < g.size() && cookie_ptr < s.size()) {
            // If the cookie satisfies the child's greed, move to the next child
            if (s[cookie_ptr] >= g[child_ptr]) {
                child_ptr++;
            }
            // Always move to the next cookie
            cookie_ptr++;
        }
        
        // The child pointer naturally tracks how many children were satisfied!
        return child_ptr;
    }
};
 /* int count = 0;
        priority_queue<int> greed(g.begin(), g.end());
        priority_queue<int> cookie(s.begin(), s.end());
        
 while (!greed.empty() && !cookie.empty()) {
            
     if (greed.top() > cookie.top()) {
        greed.pop();
 } 
    else {
       count++;
     greed.pop();
          cookie.pop();
            }
        }
        
        return count;*/