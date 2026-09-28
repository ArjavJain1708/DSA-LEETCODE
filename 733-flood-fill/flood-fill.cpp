class Solution{
    public:
    vector<vector<int>> floodFill(vector<vector<int>> &image,
                                  int sr, int sc, int newColor) {
      if (image[sr][sc] == newColor) return image; // error 1
      int rows=image.size();
      int columns=image[0].size();
      vector<vector<bool>> visited(rows,vector<bool>(columns,false));
      int dr[]={-1,0,1,0};
      int dc[]={0,-1,0,1};
      queue<pair<int,int>> q;
      q.push({sr,sc});
      int initialColor = image[sr][sc]; // error 2
      visited[sr][sc] = true;
      image[sr][sc]=newColor;
      pair<int,int> p;
      while(!q.empty()){
        p=q.front();
        q.pop();
        int r=p.first;
        int c=p.second;
        
        for(int i=0;i<4;i++){
          if(r+dr[i]<rows&&c+dc[i]<columns&&r+dr[i]>=0&&c+dc[i]>=0){
                if(image[r+dr[i]][c+dc[i]]==initialColor){ // error 3 
                    if(!visited[r+dr[i]][c+dc[i]]){
                        visited[r+dr[i]][c+dc[i]]=true;
                        image[r+dr[i]][c+dc[i]]=newColor;
                        q.push({r+dr[i],c+dc[i]});   
                    }
                }
            
        }
        }
      }
      
   return image; }
};
