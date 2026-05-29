class Solution {
public:
//ARJAV
    int projectionArea(vector<vector<int>>& grid) {
        int count=0,i,j;
    int side_area=0;
    int top_area=0;
    int front_area=0;
    for (i=0;i<grid.size();i++){
        for (j=0;j<grid.size();j++){
            if(grid[i][j]==0){
                  count++;
            }
        }
        }
        top_area=grid.size()*grid.size()-count;
        int max=0;
        for (i=0;i<grid.size();i++){
             max=0;
        for (j=0;j<grid.size();j++){
            if(grid[i][j]>max){
                  max=grid[i][j];
        }

        }
        front_area+=max;
}
for (i=0;i<grid.size();i++){
             max=0;
        for (j=0;j<grid.size();j++){
            if(grid[j][i]>max){
                  max=grid[j][i];
        }

        }
        side_area+=max;
}
  return (side_area+front_area+top_area);  }
};