class Solution {
public:
//ARJAV
    string reverseStr(string s, int k) {
       int i;
        for(i=0;i<s.length();i+=2*k){
             string v="";
            int j=0;
          while(i+j<s.length()&&j<k){
             v+=s[i+j];
             j++;
          }
          reverse(v.begin(),v.end());
          while(i+j<s.length()&&j<2*k){
            v+=s[i+j];
            j++;
          }
          for(int r = 0; r < v.length(); r++){
         s[i + r] = v[r];
}
        }
       
   return s; }
};