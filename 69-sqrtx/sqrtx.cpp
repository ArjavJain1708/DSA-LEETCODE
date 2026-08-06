class Solution {
public:
    int mySqrt(int x) {
     if(x==0||x==1){
        return x;
     }
    long long low = 1;
        long long high = x;
        long long ans = 0;
        long long mid=0;
     while(low<=high){
      mid=low+(high-low)/2;
     
      if(mid*mid>x){
        high=mid-1;
      }
      else if(mid*mid<x){
        ans = mid;
        low=mid+1;
      }
      else{
        return mid;
      }
     }
     return ans;  
    }
};