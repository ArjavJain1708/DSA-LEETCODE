class Solution {
public:
    int titleToNumber(string columnTitle) {
        int k,res=0;
        k=columnTitle.length();
        int i;
        for(i=0;i<k;i++)
        {
            res=res+(columnTitle[i]-'A'+1)*pow(26,k-1-i);
        }
      return res;
    }
};