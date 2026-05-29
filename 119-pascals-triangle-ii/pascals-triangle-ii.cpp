class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
      vector<vector<int>> final;  
      vector<int> store;
      int i,j;
      for(i=0;i<=rowIndex;i++)
      { 
        if(i==0){
            store.push_back(1);
        }
        if(i==1){
            store.push_back(1);
            store.push_back(1);
        }
        if(i>=2&&i<=rowIndex)
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
      
   return final[rowIndex];
    }
};