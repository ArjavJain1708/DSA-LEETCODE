class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int l1,l2,i=0,j=0,a,k;
       
        l1=haystack.length();
        l2= needle.length();
        string b(l2,' ');
        //b.length()=l2;
       // string b="   ";

      if (l2>l1)
      {
        k=-1;
      }
      else
      {
        while (i<l1)
        {
            while (j<l2)
            {
                for (a=0;a<l2;a++){
                if (i+a<l1)
                {
                b[a] = haystack[i+a];
                } 
                else{break;}}
                if(b==needle)
                    {
                        j++;
                    }else {break;}
                if(j==1)
                {
                    k=i;
                }
            
            }
            i++;
        }

    if(j==0)
     {
     k=-1;
     }
        
     
       
      }  
     return k; 
    }
};