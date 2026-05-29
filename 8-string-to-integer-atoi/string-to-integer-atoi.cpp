class Solution {
public:
    int myAtoi(string s) {
        int i=0,l;
        int a=1,b=0;
        l=s.length();
        long result=0;
       
      
    
            while((s[i]==' '||s[i]=='\t')&&i<l){
               i++ ;
            }
            while((s[i]=='+'||s[i]=='-')&&i<l)
            {
               if(s[i]=='-'&&b==0)
               {
                a=-1;
                b=1;
                i++;
               } 
               else if (s[i]=='+'&&b==0) {
                  b=1;
                  i++;
               }
               if((s[i]=='+'||s[i]=='-')&&b==1)
               {
                
                return 0;
               }
              
              
            }
            while((s[i]>='0'&&s[i]<='9')&&i<l){
               
                result=result*10+(s[i]-'0');
               if (result * a >= INT_MAX) return INT_MAX;
            if (result * a <= INT_MIN) return INT_MIN;
           
            i++;
            }
        
    return (int)(result*a);    
    }
};