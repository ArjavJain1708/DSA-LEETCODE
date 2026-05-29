class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    { int a=0,b=0;
      vector<vector<int>>submat;
      vector<int> unit;
      int m=mat.size();
      int n=mat[0].size();
      if (m * n != r * c) return mat;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        { 
            unit.push_back(mat[i][j]);
          a++; 
          if(a==c)
          {
            a=0;
           submat.push_back(unit);
         unit.clear();//unit.begin(),unit.end());
            b=b+1;
            if(b==r)
            {
                return submat;
            }
          }  
        
        }
      }
    
  return submat;  }
};