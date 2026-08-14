class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] = 1; // The first ugly number is always 1
        
        int p2 = 0, p3 = 0, p5 = 0;
        
        for (int i = 1; i < n; ++i) {
            int next2 = ugly[p2] * 2;
            int next3 = ugly[p3] * 3;
            int next5 = ugly[p5] * 5;
            
            // Find the smallest next ugly number
            int nextUgly = min({next2, next3, next5});
            ugly[i] = nextUgly;
            
            // Advance the pointer(s) that produced this number
            if (nextUgly == next2) p2++;
            if (nextUgly == next3) p3++;
            if (nextUgly == next5) p5++;
        }
        
        return ugly[n - 1];
    }
};
/* TLE
  int i=1;
        int b=0;
        if(n==1){
            return i;
        }
        for(int j=2;;j++){
        b=j;
          while(j%2==0) {
            j/=2;
          } 
          while(j%3==0){
            j/=3;
          }
          while(j%5==0){
            j/=5;
          }
          if(j==1){
            i++;
          }
         if(i==n){
         return b;
         }
         j=b;

        }
        */ 