class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        char word[100]={'0'},temp[100]={'0'};
        int i=0,l,k=0,b=0,j,max_len=0,g,m=0;
        l=s.length();
        while(i<l)
        { b=0;
       
            for (j=0;j<k;j++)
            {
                if(word[j]==s[i])
                {
                  b=1;
                    break;  
                }
               
            }
            if(b==0)
            {
                word[k]=s[i];
                temp[k]=s[i];
                k++;
                if(k>max_len)
                {
                    max_len=k;
                }
               
            }
            else
            {  
             m=k;
             k=0;
            for(g=j+1;g<m;g++)
            {
             word[k]=temp[g];
             temp[k]=temp[g];
              k++;
            }
            word[k]=s[i];
            temp[k]=s[i];
            k++;
             if(k>max_len)
                {
                    max_len=k;
                }
            }
             
         i++;   
        }
         
       return max_len; 
    }
};