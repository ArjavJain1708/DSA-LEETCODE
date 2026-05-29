class Solution {
public:
//ARJAV
    string convertToBase7(int num) {
       int sign=1;
       string base;
       if(num==0){
        return "0";
       }
       if(num<0){
        sign=-1;
        num=num/(-1);
       } 
       while(num>0){
        int c=num%7;
        base+=c+'0';
        num=num/7;
      }
      if(sign==-1){
        base+='-';
      }
      reverse(base.begin(),base.end());
   return base; }
};