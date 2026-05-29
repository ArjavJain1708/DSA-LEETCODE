class Solution {
public:
    bool rotateString(string s, string goal) {
        string r=s;
        if(s==goal){
            return true;
        }
        int i;
       char temp=s[0];
        for(i=0;i<s.length()-1;i++){
            s[i]=s[i+1];
        }
        s[s.length()-1]=temp;
        while(s!=r){
           if(s==goal){
            return true;
           } 
           else{
            char temp=s[0];
        for(i=0;i<s.length()-1;i++){
            s[i]=s[i+1];
        }
        s[s.length()-1]=temp;
           }
        }
    return false;}
};