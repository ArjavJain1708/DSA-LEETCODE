class Solution {
public:
   /*long long factorial(int n) {
    long long res = 1;
    // Factorial is only defined for non-negative integers
    if (n < 0) {
        return -1; // Or handle the error as needed
    }
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}*/
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> final;  
      vector<int> store;
      int i,j;
      for(i=0;i<numRows;i++)
      { 
        if(i==0){
            store.push_back(1);
        }
        if(i==1){
            store.push_back(1);
            store.push_back(1);
        }
        if(i>=2&&i<=numRows-1)
        {
          for(j=0;j<=i;j++)
          {
            // store.push_back(factorial(i)/(factorial(i-j)*factorial(j)));
            if(j==0||j==i)
            {
                store.push_back(1);

            }
            else{
                store.push_back(final[i-1][j-1]+final[i-1][j]);
            }
          }
        }
        final.push_back(store);
        store.clear();
      }
      
   return final; }
};