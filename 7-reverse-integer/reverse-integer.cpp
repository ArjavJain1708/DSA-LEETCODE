class Solution {
public:
    int reverse(int x) {
        long int sign=1;
        long int ans=0;
        
       
        while(x!=0){
           int c= x%10;
          if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && c > 7)) {
                return 0;
            }
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && c < -8)) {
                return 0;
            }
            
            ans = ans * 10 + c;
            x /= 10;
        }
       
   return ans; }
};