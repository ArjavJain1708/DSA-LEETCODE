class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    /* int l=digits.size(); 
     vector<int>plus;  
    unsigned long long int result=0;
     int i,c,b=0;
     for(i=0;i<l;i++)
     {
        result=digits[i]*pow(10,(l-1-i))+result;
     }
     result=result+1;
     while(result>0)
     { 
          c=result%10;
         
            plus.push_back(c);
          
          result=result/10;
     }

     reverse(plus.begin(), plus.end());/*/
     int n = digits.size();
        
        // Traverse from the end (right to left)
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // If it's not a 9, just increment and we are finished!
                digits[i]++;
                return digits;
            }
            // If it was a 9, it becomes 0
            digits[i] = 0;
        }
        
        // If we are here, it means the number was something like 9, 99, or 999
        // We need to add a '1' at the start. Example: 99 -> 100
        digits.insert(digits.begin(), 1);
        
        return digits;
     
  }
};