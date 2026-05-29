class Solution {
public:
//ARJAV
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      vector<vector<int>> mat;
       int m=matrix.size();
       int n=matrix[0].size();
       mat.resize(n);
       int i,j;
       for(i=0;i<n;i++){
        mat[i].resize(m);
       }
       
       for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat[i][j]=matrix[j][i];
        }
       }
return mat;
       }
};