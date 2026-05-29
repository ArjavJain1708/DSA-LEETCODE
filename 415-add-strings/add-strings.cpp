class Solution {
public:
//ARJAV
    string addStrings(string num1, string num2) {
     int carry=0;
     string ans;
     int i;
     if (num1.length() <= num2.length()) {
    swap(num1, num2);
}
     if(num1.length()>=num2.length()){
        for( i=0;i<num2.length();i++){
            int k=(num1[num1.length()-1-i]-'0')+(num2[num2.length()-1-i]-'0');
            if(k+carry>=10){
                 ans=ans+(char)((k+carry)%10+'0');
                 carry=1;
            }
            else{
                
                ans=ans+(char)((k+carry)+'0');
                carry=0;
            }
        }
        for(int j=i;j<num1.length();j++){
            if((num1[num1.length()-1-j]-'0'+carry)>=10){
                ans=ans+(char)((num1[num1.length()-1-j]-'0'+carry)%10+'0');
                carry=1;
            }
            else{
                ans=ans+(char)((num1[num1.length()-1-j]-'0'+carry)+'0');
                carry=0; 
            }
        }
        if(carry==1){
            ans+=(1+'0');
        }
        reverse(ans.begin(),ans.end());
     }   
   return ans; }
};