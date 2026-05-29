class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result;
        int i;
       for(i=0;i<s.length();i++){
        int left=i;
        int right=i+1;
        int left_close=200,right_close=200;
        while(left>=0){
         if(s[left]==c){
            left_close=abs(left-i);
            break;
         } 
         left--;  
        }
        while(right<s.length()){
         if(s[right]==c){
            right_close=abs(right-i);
            break;
         } 
         right++;  
        }
        if(right_close>=left_close){
           result.push_back(left_close);
        }
        else{
           result.push_back(right_close);
        }
     } 
   return result; }
};