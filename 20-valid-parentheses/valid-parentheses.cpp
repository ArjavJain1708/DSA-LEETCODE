class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            // If it's an opening bracket, push to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // If it's a closing bracket, check if stack is empty or mismatch occurs
                if (st.empty()) return false;
                
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
                st.pop(); // Pop the matched opening bracket
            }
        }
        
        // If stack is empty, all brackets matched successfully
        return st.empty();
    }
};