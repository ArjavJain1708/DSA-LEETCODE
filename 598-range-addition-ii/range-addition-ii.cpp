class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
      /*  if (ops.empty()) return m * n;
     int mat[m][n];
     int i,j;
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            mat[i][j]=0;
        }
     } 
     int l = ops.size();
     int k=0;
     while(k<l)
     {
        int a=ops[k][0];
        int b=ops[k][1];
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                mat[i][j]=mat[i][j]+1;
            }
        }
        k++;
     }
     int max=0;
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
           if(mat[i][j]>=max)
           {
            max=mat[i][j];
           } 
        }
     } 
     int length=0;
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
           if(mat[i][j]==max)
           {
            length++;
           } 
        }
     } 
return length;*/
if (ops.empty()) return m * n;

        
        int min_a = m;
        int min_b = n;

        for (int i = 0; i < ops.size(); i++) {
            
            if (ops[i][0] < min_a) {
                min_a = ops[i][0];
            }
            
            if (ops[i][1] < min_b) {
                min_b = ops[i][1];
            }
        }

     
        return min_a * min_b;
    }
};