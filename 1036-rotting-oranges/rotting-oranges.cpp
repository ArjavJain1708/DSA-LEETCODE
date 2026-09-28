class Solution{
public:
struct Orange {
    int r;
    int c;
    int t;
};
    int orangesRotting(vector<vector<int>> &grid) 
 {
    int fresh_oranges=0;
       int rows=grid.size();
      int columns=grid[0].size();
      int dr[]={-1,0,1,0};
      int dc[]={0,-1,0,1};
      queue<Orange> q;
      for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(grid[i][j]==2){
                q.push({i,j,0});
            }
            if(grid[i][j]==1){
                fresh_oranges++;
            }
        }
      }
      int max_t=0;
      Orange p;
      while(!q.empty())
      {
        
        p=q.front();

        q.pop();
        int r=p.r;
        int c=p.c;
        int t=p.t;
        max_t=max(max_t,t);
        for(int i=0;i<4;i++)
        {
          if(r+dr[i]<rows&&c+dc[i]<columns&&r+dr[i]>=0&&c+dc[i]>=0)
           {
                if(grid[r+dr[i]][c+dc[i]]==1)
                {  
                    
                       fresh_oranges--;
                       
                        grid[r+dr[i]][c+dc[i]]=2;
                        q.push({r+dr[i],c+dc[i],t+1});   
                    

                }
            
            }
        }
    }
   if(fresh_oranges!=0){
    return -1;
   }

 return max_t;}

};
