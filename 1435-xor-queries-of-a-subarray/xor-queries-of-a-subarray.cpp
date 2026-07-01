class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pref(n);
        
        // Initialize prefix array of size n
        pref[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            pref[i] = pref[i - 1] ^ arr[i];
        }
        
        vector<int> result;
        for (const auto& q : queries) {
            int left = q[0];
            int right = q[1];
            
            // Handle the case where the range starts from the beginning
            if (left == 0) {
                result.push_back(pref[right]);
            } else {
                result.push_back(pref[right] ^ pref[left - 1]);
            }
        }
        
        return result;
    }
};