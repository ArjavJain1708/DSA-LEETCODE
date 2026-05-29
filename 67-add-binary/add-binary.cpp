class Solution {
public:
    string addBinary(string a, string b) {
        int k,l,store=0;
        int i,j;
        k=a.length();
        l=b.length();
        string s,r;
        
        if(k>=l)
        {
           while(l>0)
            {    if(a[k-1]=='1'&&b[l-1]=='1')
               {if(store==0)
                {
                    store=1;
                    s+='0';
                }
                else{
                    store=1;
                    s+='1';
                }
               }
                    
                
                else if(a[k-1]=='1'&&b[l-1]=='0')
                {
                    if (store==1)
                    {
                        store=1;
                        s+='0';
                    }
                    else{
                         store=0;
                        s+='1';
                    }
                }
                else if(a[k-1]=='0'&&b[l-1]=='1')
                {
                    if (store==1)
                    {
                        store=1;
                        s+='0';
                    }
                    else{
                         store=0;
                         s+='1';
                    }
                }
                else if(a[k-1]=='0'&&b[l-1]=='0')
                {
                    if (store==1)
                    {
                        store=0;
                        s+='1';
                    }
                    else{
                         store=0;
                        s+='0';
                    }
                }
                k--;
                l--;
            } 
           while(k>0)
           {
            if(store==1&&a[k-1]=='1')
            {
                store=1;
                s+='0';
            }
            else if (store==0)
            {
                store=0;
                s+=a[k-1];
            }
            else if(store==1&&a[k-1]=='0')
            {
                store=0;
                s+='1';
            }
            k--;
           }
           if(store!=0)
           {
            s+='1';
           }
           r=s;
           for(j=0;j<s.length();j++)
           {
            s[j]=r[s.length()-j-1];
           }
        }

         if(l>k)
        {
           while(k>0)
            {
                if(a[k-1]=='1'&&b[l-1]=='1')
               {if(store==0)
                {
                    store=1;
                    s+='0';
                }
                else{
                    store=1;
                    s+='1';
                }
               }
               
                    
                
                else if(a[k-1]=='1'&&b[l-1]=='0')
                {
                    if (store==1)
                    {
                        store=1;
                        s+='0';
                    }
                    else{
                         store=0;
                        s+='1';
                    }
                }
                else if(a[k-1]=='0'&&b[l-1]=='1')
                {
                    if (store==1)
                    {
                        store=1;
                        s+='0';
                    }
                    else{
                         store=0;
                         s+='1';
                    }
                }
                else if(a[k-1]=='0'&&b[l-1]=='0')
                {
                    if (store==1)
                    {
                        store=0;
                        s+='1';
                    }
                    else{
                         store=0;
                        s+='0';
                    }
                }
                k--;
                l--;
            } 
           while(l>0)
           {
            if(store==1&&b[l-1]=='1')
            {
                store=1;
                s+='0';
            }
            else if (store==0)
            {
                store=0;
                s+=b[l-1];
            }
            else if(store==1&&b[l-1]=='0')
            {
                store=0;
                s+='1';
            }
            l--;
           }
           if(store!=0)
           {
            s+='1';
           }
           r=s;
           for(j=0;j<s.length();j++)
           {
            s[j]=r[s.length()-j-1];
           }
        }
        return s;
        
    }
};