class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for (j=0;j<matrix[i].size();j++)
            {
                if(i>=matrix.size()-1||j>=matrix[i].size()-1||matrix[i][j]==matrix[i+1][j+1])
                {
                    ;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};