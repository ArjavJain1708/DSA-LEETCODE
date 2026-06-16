class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        // Step 2: Find the GCD of the lengths of both strings
        int gcd_length = std::gcd(str1.length(), str2.length());
        
        // Step 3: Return the prefix of that GCD length
        return str1.substr(0, gcd_length);
        
    }
};