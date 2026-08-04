class Solution {
public:
    string intToRoman(int num) {
        
        char ar10[] = {'I', 'X', 'C', 'M'};
        char ar5[] = {'V', 'L', 'D'}; 
        
        string ans = "";
        int a = 0;
        
        
        int temp = num;
        while (temp > 0) {
            a++;
            temp /= 10;
        }
        
        while (a > 0) {
            int div = pow(10, a - 1);
            int c = num / div;  
            num %= div;       
      if (c < 4) {
          for (int j = 0; j < c; j++) {
              ans += ar10[a - 1];
              }
            }
            else if (c == 4) {
                ans += ar10[a - 1];
                ans += ar5[a - 1];
            }
            else if (c >= 5 && c < 9) {
                ans += ar5[a - 1];
                for (int j = 0; j < (c - 5); j++) {
                    ans += ar10[a - 1];
                }
            }
            else if (c == 9) {
                ans += ar10[a - 1];
                ans += ar10[a];
            }
            
            a--;
        }
        
        return ans;
    }
};