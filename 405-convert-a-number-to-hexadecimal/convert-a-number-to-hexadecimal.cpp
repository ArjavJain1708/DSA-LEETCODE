class Solution {
public:
//ARJAV
    string toHex(int num) {
        string k;
        if(num==0){
            return "0";
        }
  unsigned int n;
  n=num;
       while(n>0){
        int c=n%16;
         
        if(c<16){
            if(c<=9){
                k+=c+'0';
            }
            else{
                k+='a'+(c-10);
            }
        }
     n=n/16;  
       } 
      reverse(k.begin(),k.end());
  return k;  }
};