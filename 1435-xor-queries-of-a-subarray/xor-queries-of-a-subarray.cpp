class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        // Create prefix XOR array of size n + 1
        vector<int> pref(n + 1, 0);
        
        for (int i = 0; i < n; ++i) {
            pref[i + 1] = pref[i] ^ arr[i];
        }
        
        vector<int> result;
        // Process each query
        for (const auto& q : queries) {
            int left = q[0];
            int right = q[1];
            // The XOR sum from left to right is pref[right + 1] ^ pref[left]
            result.push_back(pref[right + 1] ^ pref[left]);
        }
        
        return result;
    }
};