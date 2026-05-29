class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int max=n/2;
        int count=1;
        sort(candyType.begin(),candyType.end());
        int i=0;
        while(i<n-1)
        {
            if(candyType[i]!=candyType[i+1])
            {
               count++; 
            }
           i++;
        }
        if(count>=max)
        {
            return max;
        }
        else{
            return count;
        }
  //return max;  }
    }
};