class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> uc;
        string a;
        int j=0;
        int count=0;
        while(j<s1.length()){
            while(j<s1.length()&&s1[j]==' '){
                j++;
            }
            while(j<s1.length()&&s1[j]!=' '){
                a+=s1[j];
                j++;
            }
              int count_s1 = 0;
            size_t pos = s1.find(a);
            while (pos != string::npos) {
                // Check if it's a standalone word in s1
                bool is_start_boundary = (pos == 0 || s1[pos - 1] == ' ');
                bool is_end_boundary = (pos + a.length() == s1.length() || s1[pos + a.length()] == ' ');
                
                if (is_start_boundary && is_end_boundary) {
                    count_s1++;
                }
                pos = s1.find(a, pos + a.length()); 
            }

            // 2. Count occurrences in s2 (Must match exact word boundaries)
            int count_s2 = 0;
            pos = s2.find(a);
            while (pos != string::npos) {
                // Check if it's a standalone word in s2 means that it is like that it dont count ship in partnership
                bool is_start_boundary = (pos == 0 || s2[pos - 1] == ' ');
                bool is_end_boundary = (pos + a.length() == s2.length() || s2[pos + a.length()] == ' ');
                
                if (is_start_boundary && is_end_boundary) {
                    count_s2++;
                }
                pos = s2.find(a, pos + a.length()); 
            }

            // A word is uncommon if it appears exactly once across both sentences
            if (count_s1 == 1 && count_s2 == 0) {
                uc.push_back(a);
            }
        a="";
        }
 
j=0;

 while(j<s2.length()){
            while(j<s2.length()&&s2[j]==' '){
                j++;
            }
            while(j<s2.length()&&s2[j]!=' '){
                a+=s2[j];
                j++;
            }
              int count_s2 = 0;
            size_t pos = s2.find(a);
            while (pos != string::npos) {
                // Check if it's a standalone word in s2
                bool is_start_boundary = (pos == 0 || s2[pos - 1] == ' ');
                bool is_end_boundary = (pos + a.length() == s2.length() || s2[pos + a.length()] == ' ');
                
                if (is_start_boundary && is_end_boundary) {
                    count_s2++;
                }
                // ab aage ka index se start 
                // s2.find(to find,start from where in s2);
                pos = s2.find(a, pos + a.length()); 
            }

            // 2. Count occurrences in s2 (Must match exact word boundaries)
            int count_s1 = 0;
            pos = s1.find(a);
            while (pos != string::npos) {
                // Check if it's a standalone word in s2 means that it is like that it dont count ship in partnership
                bool is_start_boundary = (pos == 0 || s1[pos - 1] == ' ');
                bool is_end_boundary = (pos + a.length() == s1.length() || s1[pos + a.length()] == ' ');
                
                if (is_start_boundary && is_end_boundary) {
                    count_s1++;
                }
                pos = s1.find(a, pos + a.length()); 
            }

            // A word is uncommon if it appears exactly once across both sentences
            if (count_s2 == 1 && count_s1 == 0) {
                uc.push_back(a);
            }
            a="";
        }
 








   return uc; }
};