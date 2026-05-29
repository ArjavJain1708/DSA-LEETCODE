class Solution {
public:
    string convertToTitle(int columnNumber) {
     string r,t;   
     int k;
    while(columnNumber>0){
       columnNumber=columnNumber-1;
        k=columnNumber%26;
        
        
        r+='A'+(k);
        
        columnNumber=columnNumber/26;
    }
reverse(r.begin(),r.end());
    return r;}
};