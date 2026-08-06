class Solution {
public:
void helper(int target,vector<int>&candidates,int idx,vector<int>& store,vector<vector<int>>& result){
    if(idx==candidates.size()){
        if(target==0){
            result.push_back(store);
            
        }
     return;
    }
 if(target-candidates[idx]>=0){
    store.push_back(candidates[idx]);
    helper(target-candidates[idx],candidates,idx+1,store,result);
    store.pop_back();
 }

       int nextIdx = idx + 1;
        while (nextIdx < candidates.size() && candidates[nextIdx] == candidates[idx]) {
            nextIdx++;
        }
        helper(target, candidates, nextIdx, store, result);
return ;
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> store;
        sort(candidates.begin(),candidates.end());
        helper(target,candidates,0,store,result);
       return result;
    }
};