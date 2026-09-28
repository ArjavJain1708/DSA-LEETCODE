class Solution {
public:
void trav_dfs(int node,vector<bool>& visited,vector<vector<int>>& adj){
  visited[node]=true;
  for(int i=0;i<adj[node].size();i++){
    if(adj[node][i]==1){
    if(!visited[i]){
        trav_dfs(i,visited,adj);
    }
  }
  else{
    continue;
  }
}
return ;
}
    int findCircleNum(vector<vector<int>>& adj) {
        int V=adj.size();
        vector<bool>visited(V,false);
        int count=0;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            count++;
        trav_dfs(i,visited,adj);
        }
    }
    return count;
    }
};
 