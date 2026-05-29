class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Handle empty input
        if (strs.empty()) return "";
        if (strs.size()==1)
        {
            return strs[0];
        }
        else{
        int k,i,j,l,s,m,n=200;
        string result;
        string temp;
        k=strs.size();
        for(i=0;i<k-1;i++)
        {  result=""; 
           j=strs[i].size();
           l=strs[i+1].size();
           if(j<=l)
           {
            for(s=0;s<j;s++)
            {
            if (strs[i][s]==strs[i+1][s])
            {
                result+=strs[i][s];
            }
            else{
                break;
                }
           }
           }
           if(l<j)
           {
            for(s=0;s<l;s++)
            {
            if (strs[i][s]==strs[i+1][s])
            {
                result+=strs[i][s];
            }
            else{
                break;
                }
           }
           }
           m=result.length();
           if(m<n&&m!=0)
           {
             temp=result;
             n=m;
           }
           else if (m==0)
           {
            return "";
           }
        }
        
        return temp;
        }
       
    }
};